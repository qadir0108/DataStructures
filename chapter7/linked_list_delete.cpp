/*
	Linked List - Delete
	1. From End
	2. From Start
	3. Specified Item
	Data Structures using C++ - Examples
	Date:	2020-12-08			Version:1.0
	Date:	2022-11-17			Version:2.0
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

class LinkedListDelete
{
	private:
		Node* start;
		Node* current;
		Node* temp;
		Node* previous;
	
	public:
		
		LinkedListDelete() 
		{
			start = NULL;
		}
		
		// Member function to insert at End
		void insertEnd(int n)
		{
			// Create New Node
			temp = new Node;
			temp -> data = n;
			temp -> link = NULL;

			if(start == NULL) 
			{
				start = temp;
			}
			else
			{
				// Traversing / Visiting Linked List
				current = start;
				while(current -> link != NULL)
				{
					current = current -> link;
				}
				
				// Append new Node in the last
				current -> link = temp;	
			}
		}
		
		// Member function to delete Specified Item
		void deleteSpecificItem(int n)
		{
			// Go to specified node
			current = start;
			previous = start;
			while(current -> link != NULL)
			{
				if(current -> data == n) 
				{
					cout << "\nNumber FOUND & DELETED:" << current -> data;
					previous -> link = current -> link;
					delete current;
					break;
				}
				previous = current;
				current = current -> link;
			}
		}
		
		// Member function to delete at Start
		void deleteStart()
		{
			cout << "\nNumber from Start DELETED: " << start -> data;
			temp = start;
			start = start -> link;
			delete temp;
		}
		
		// Member function to delete at End
		void deleteEnd()
		{
			// Traversing / Visitng Linked List
			current = start;
			previous = start;
			while(current -> link != NULL)
			{
				previous = current;
				current = current -> link;
			}
			
			// current will be last node
			// temp will be second last node
			cout << "\nNumber from End DELETED: "<< current -> data;
			previous -> link = NULL;
			delete current;
		}
		
		// Member function to print
		void print()
		{
			cout << "\nData in Linked List" << endl;
			
			current = start;
			while(current -> link != NULL)
			{
				cout << current -> data << "\t";
				current = current -> link;
			}
			
			cout << current -> data << endl;
		}
};
// Class LinkedListDelete End

// Main function
int main()
{
	cout << "******** Linked List Delete **********" << endl;
	LinkedListDelete obj;
	
	int value;
	int position;
	
	cout << "\nEnter 5 values to *Insert At End* : " << endl;
	for(int i=0;i<5;i++)
	{
		cin >> value;
		obj.insertEnd(value);
	}
	obj.print();
	
	cout << "\nNow Enter value to search & DELETE, it will be *Delete Specified Item* : " << endl;
	cin >> value;
	obj.deleteSpecificItem(value);
	obj.print();
	
	cout << "\nNow *Delete from End* : " << endl;
	obj.deleteEnd();
	obj.print();
	
	cout << "\nNow *Delete from Start* : " << endl;
	obj.deleteStart();
	obj.print();
	
	return 0;
}
