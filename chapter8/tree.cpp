/*
	Tree Data Structure
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
		
		// Member function to create
		int create(int n)
		{
			// Create new node
			temp = new Node;
			temp -> left = NULL;
			temp -> data = n;
			temp -> right = NULL;
				
			if(root == NULL) 
			{
				root = temp;
			}
			else
			{
				// Traversing, finding parent node for new node
				Node* parent = NULL;
				
				current = root;
				while(current != NULL)
				{
					parent = current;
					if(n == current -> data) 
					{
						cout << "Data already exists";
						return -1;
					}
					if(n < current -> data)
					{
						current = current -> left;
					}
					else
					{
						current = current -> right;
					}
				}
				
				if(n < parent -> data)
				{
					parent -> left = temp;
				}
				else 
				{
					parent -> right = temp;
				}
			}
		}
		
		// Member function to search
		void search(int x)
		{
			if(root == NULL)
			{
				cout << "Tree is Empty";
				return;
			}
			
			current = root;
			while(current != NULL)
			{
				if(current -> data == x)
				{
					cout << x << " Found!";
					return;
				}
				if(x < current -> data)
				{
					current = current -> left;
				}
				else
				{
					current = current -> right;
				}
			}
			
			if(current == NULL)
			cout << x << " Not Found";
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
		cout << "2. Search Node" << endl;
		cout << "3. Exit" << endl;
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
				cout << "Enter value to Search: ";
				cin >> value;
				obj.search(value);
				break;
			case 3:
				flag = 0;
				break;	
		}
	}
		
	return 0;
}
