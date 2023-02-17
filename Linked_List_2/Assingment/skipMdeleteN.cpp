// Delete every N nodes
// Send Feedback
// You have been given a singly linked list of integers along with two integers, 'M,' and 'N.' Traverse the linked list such that you retain the 'M' nodes, then delete the next 'N' nodes. Continue the same until the end of the linked list.
// To put it in other words, in the given linked list, you need to delete N nodes after every M nodes.
// Note :
// No need to print the list, it has already been taken care. Only return the new head to the list.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first line of each test case or query contains the elements of the singly linked list separated by a single space.

// The second line of input contains two integer values 'M,' and 'N,' respectively. A single space will separate them.
//  Remember/Consider :
// While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
// Output format :
// For each test case/query, print the elements of the updated singly linked list.

// Output for every test case will be printed in a seperate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= P <= 10^5
// Where P is the size of the singly linked list.
// 0 <= M <= 10^5
// 0 <= N <= 10^5 

// Time Limit: 1sec
// Sample Input 1 :
// 1
// 1 2 3 4 5 6 7 8 -1
// 2 2
// Sample Output 1 :
// 1 2 5 6
// Sample Input 2 :
// 2
// 10 20 30 40 50 60 -1
// 0 1
// 1 2 3 4 5 6 7 8 -1
// 2 3
// Sample Output 2 :
// 1 2 6 7

#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};



Node *skipMdeleteN(Node *head,int m,int n)
{
	Node *temp=head;
	Node *prev=NULL;
	if(temp==NULL)
	{
		return temp;
	}
	// Condtion for deleteing whole LL
	if(m==0 && n!=0)
	{
		return NULL;
	}
	// skip whole LL
	if(n==0)
	{
		return temp;
	}
	while(temp!=NULL)
	{
		int count1=1;
		int count2=1;
		
		//for skiping nodes 
		while(m>=count1 && temp!=NULL)
		{
			prev=temp;
			temp=temp->next;
			count1++;
		}
		// for deleteing nodes
		while(n>=count2 && temp!=NULL)
		{
			Node *del=temp;
			delete del;
			temp=del->next;
			count2++;
		}
		prev->next=temp;
	}
	return head;
}
Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}
