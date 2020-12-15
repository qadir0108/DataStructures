/*
	Tree Traverse in PreOrder, InOrder, PostOrder
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-12-15
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include<iostream>
#include<conio.h>
using namespace std;
struct Node
{
	Node* left;
	int data;
	Node* right; 
};

class Tree
{
	private:
		Node* root;
		Node* current;
		Node* temp;
		
	public:
		
		Tree() 
		{
			root = NULL;
		}
		
		// Member function to Traverse PreOrder
		void preOrder()
		{
			pre(root);
		}
		
		void pre(Node* node)
		{
			if(node != NULL)
			{
				cout << node -> data << "\t";
				pre(node -> left);
				pre(node -> right);
			}
		}
		
		// Member function to Traverse InOrder
		void inOrder()
		{
			in(root);
		}
		
		void in(Node* node)
		{
			if(node != NULL)
			{
				in(node -> left);
				cout << node -> data << "\t";
				in(node -> right);
			}
		}
		
		// Member function to Traverse PostOrder
		void postOrder()
		{
			post(root);
		}
		
		void post(Node* node)
		{
			if(node != NULL)
			{
				in(node -> left);
				in(node -> right);
				cout << node -> data << "\t";
			}
		}
		
		// Member function to create
		int create(int n)
		{
			if(root == NULL) 
			{
				root = new Node;
				root -> left = NULL;
				root -> data = n;
				root -> right = NULL;
			}
			else
			{
				// Traversing, finding parent node for new node
				Node* parent = NULL;
				
				current = root;
				while(current != NULL)
				{
					if(current -> data == n) 
					{
						cout << "Data already exists";
						return -1;
					}
					if(n < current -> data)
					{
						parent = current;
						current = current -> left;
					}
					else
					{
						parent = current;
						current = current -> right;
					}
				}
				
				// Create & add new node under parent Node
				temp = new Node;
				temp -> left = NULL;
				temp -> data = n;
				temp -> right = NULL;
				
				if(parent == NULL)
				{
					parent = temp;	
				}
				else if(n < parent -> data)
				{
					parent -> left = temp;
				}
				else 
				{
					parent -> right = temp;
				}
			}
		}
};
// Class Tree End

// Main function
int main()
{
	cout << "******** Tree Data Structure **********" << endl;
	Tree obj;
	
	int option;
	int flag = 1;
	int value;
	
	while(flag)
	{
		cout << endl;
		cout << "1. Create new Tree" << endl;
		cout << "2. PreOrder Traversal" << endl;
		cout << "3. InOrder Traversal" << endl;
		cout << "4. PostOrder Traversal" << endl;
		cout << "5. Exit" << endl;
		cout << "Enter your choice / option : " << endl;
		cin >> option;
		
		switch(option) 
		{
			case 1:
				cout << "Enter 7 values: ";
				for(int i=0;i<7;i++) 
				{
					cin >> value;
					obj.create(value);
				}
				break;
			case 2:
				cout << endl << "******* PreOrder Traversal *******" << endl;
				obj.preOrder();
				break;
			case 3:
				cout << endl << "****** InOrder Traversal *******" << endl;
				obj.inOrder();
				break;
			case 4:
				cout << endl << "******* PostOrder Traversal *******" << endl;
				obj.postOrder();
				break;
			case 5:
				flag = 0;
				break;	
		}
	}
		
	return 0;
}
