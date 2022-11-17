/*
	Linked List
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
				// Traversing / Visitng Linked List
				current = start;
				while(current -> link != NULL)
				{
					current = current -> link;
				}
				
				// Append new Node in the last
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
