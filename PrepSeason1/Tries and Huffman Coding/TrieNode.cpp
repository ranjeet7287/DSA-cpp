#include<bits/stdc++.h>
using namespace std;
class TrieNode
{
    public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data)
    {
        this->data=data;
        children=new TrieNode*[26];
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};
class Trie
{
    TrieNode *root;
    public:
    Trie(){
        // for the start intalising with NULL
        root=new TrieNode('\0');
    }
    private:
    // Insert
    void insertWord_helper(TrieNode *root,string word){
        // Base Case
        // Null string then in this case we will need to stop at root.
        if(word.size()==0){
            root->isTerminal=true;
            return;
        }
        // Small Calculation
        // finding correct index of first letter of word.
        // 'a'-'a'-->0
        // 'b'-'a'-->1  .. ........ 'z'-'a'--> 25
        // a,b,c,d,.......,z
        // 0,1,2,3,.......,25
        // only for lowercase words
        int index=word[0]-'a';
        TrieNode *child;
        // if letter is present is or not
        if(root->children[index]!=NULL)
        {
            child=root->children[index];
        }else{
            // if letter is not found then we create new node
            child=new TrieNode(word[0]);
            // connecting
            root->children[index]=child;
        } 
        //  Recursive call
        insertWord_helper(child,word.substr(1));
    }
    public:
    void insertWord(string word){
        insertWord_helper(root,word);
    }
    private:
    // Search 
    bool search_help(TrieNode *root,string word)
    {
        //  Base Case
        if(word.size()==0){
            return root->isTerminal;
        }
        int index=word[0]-'a';
        if(root->children[index]==NULL){
            return false;
        }
        return search_help(root->children[index],word.substr(1));
    }
    public:
    bool search(string word){
        return search_help(root,word);
    }
    private:
    // Remove
    void removeWord_help(TrieNode *root,string word)
    {
        // Base Case
        if(word.size()==0){
            root->isTerminal=false;
            return;
        }
        // small Cal..
        TrieNode *child;
        int index=word[0]-'a';
        if(root->children[index]!=NULL){
            child=root->children[index];
        }else{
            // word not found
            return;
        }
        removeWord_help(child,word.substr(1));
        
        // Remove child Node if it is useless
        // codition for useless node isterminal==false and not have children.
        if(child->isTerminal==false){
            for(int i=0;i<26;i++){
                if(child->children[i]!=NULL){
                    return;
                }
            }
            // not have children
            delete child;
            root->children[index]=NULL;
        }
    }
    public:
    void removeWord(string word){
        removeWord_help(root,word);
    }
};
int main()
{
    Trie t;
    t.insertWord("and");
    t.insertWord("are");
    t.insertWord("love");
    t.insertWord("dot");
    cout<<t.search("love")<<endl;
    t.removeWord("dot");
    cout<<t.search("dot")<<endl;

}