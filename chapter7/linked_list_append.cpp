/*
	Linked List
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-12-08
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include<iostream>
#include<conio.h>
using namespace std;
struct Node
{
	int data;
	Node* link; 
};

class LinkedListAppend
{
	private:
		Node* start;
		Node* current;
		Node* temp;
	
	public:
		
		LinkedListAppend() 
		{
			start = NULL;
		}
		
		// Member function to append
		void append(int n)
		{
			if(start == NULL) 
			{
				start = new Node;
				start -> data = n;
				start -> link = NULL;
			}
			else
			{
				// Traversing / Visitng Linked List
				current = start;
				while(current -> link != NULL)
				{
					current = current -> link;
				}
				
				temp = new Node;
				temp -> data = n;
				temp -> link = NULL;
				
				current -> link = temp;	
			}
		}
		
		// Member function to print
		void print()
		{
			cout << "Data in Linked List" << endl;
			
			current = start;
			while(current -> link != NULL)
			{
				cout << current -> data << "\t";
				current = current -> link;
			}
			
			cout << current -> data << endl;
		}
};
// Class LinkedListAppend End

// Main function
int main()
{
	cout << "******** LinkedList Example 1 **********" << endl;
	LinkedListAppend obj;
	
	int value;
	
	cout << "\nEnter five value : " << endl;
	for(int i=0;i<5;i++)
	{
		cin >> value;
		obj.append(value);
	}
	obj.print();
	
	return 0;
}
