// Huffman Coding 
// to reduce the space requirement
// abaaad -- > 6 byte -- > 48 bits
// if we decrese the size of most ocurring charcter
// a -> 3 bit , b -> 12 bits , d-> 11 bits .
// abaaad --> 3+12+9+11 -- > 35 bits

#include <bits/stdc++.h>
using namespace std;
 
// A Huffman tree node
struct Huffman_Node{
 
    // Taking one of the input characters
    char data;
 
    // Frequency of each character
    unsigned freq;
 
    // Left and right child of the tree
    Huffman_Node *left, *right;
 
    Huffman_Node(char data, unsigned freq){
 
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};
// compare helps to compare the node
// this helps in extracting the minimum freq every time
struct Compare {
    bool operator()(Huffman_Node* l, Huffman_Node* r){
        return (l->freq > r->freq);
    }
};
 
// Prints huffman codes from the formed tree
void print_Tree(struct Huffman_Node* root, string str){
    if (!root)
        return;
    // it means it reached the leaf node and print the code
    if (root->data != '#')
        cout << root->data << "    | " << str << "\n";
    // assign weight to nodes: if left add 0 to code
    // if right adds 1 to the code.
    // recursive calls for left and
    // right sub-tree of the generated tree.
    print_Tree(root->left, str + "0");
    print_Tree(root->right, str + "1");
}
 
// The main function that builds a Huffman Tree and
// print codes of each character by traversing the built Huffman Tree
void HuffCodes(char data[], int freq[], int size){
    struct Huffman_Node *left, *right, *top;
 
    // Create a min heap & inserts all characters of data[]
    priority_queue<Huffman_Node*, vector<Huffman_Node*>, Compare> Min_Heap;
 
    for (int i = 0; i < size; ++i)
        Min_Heap.push(new Huffman_Node(data[i], freq[i]));
 
    // Iterate while the size of the heap doesn't become 1
    while (Min_Heap.size()!=1){
 
        // Extract the two minimum
        // freq items from min heap
        left = Min_Heap.top();
        Min_Heap.pop();
 
        right = Min_Heap.top();
        Min_Heap.pop();
 
        // Create a new internal node with
        // frequency equal to the sum of the left and right node
        // Add this node to the min heap '#' is a special value
        // for internal nodes, not used
        top = new Huffman_Node('#', left->freq + right->freq);
 
        top->left = left;
        top->right = right;
 
        Min_Heap.push(top);
    }
 
    // Print Huffman codes using the Huffman tree built above
    cout << "Char | Huffman code ";
    cout << "\n----------------------\n";
    print_Tree(Min_Heap.top(), "");
}
 
// Driver Code
int main(){
    //given a char array consisting of unique characters
    char arr[] = { 'a', 'b', 'c', 'd' , 'e' };
    
    //an int array which tells the frequency of each character 
    int freq[] =  { 4, 7, 3, 2, 4 };
    
    //To find the size
    int S = sizeof(arr) / sizeof(arr[0]);
    
    //For finding Huffman code for each character 
    HuffCodes(arr, freq, S);
    return 0;
}



