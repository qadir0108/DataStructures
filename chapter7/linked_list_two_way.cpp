/*
	Two Way Linked List
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
	Node* previous;
	int data;
	Node* next; 
};

class TwoWayLinkedList
{
	private:
		Node* start;
		Node* current;
		Node* temp;
		Node* last;
		
	public:
		
		TwoWayLinkedList() 
		{
			start = NULL;
		}
		
		// Member function to append
		void append(int n)
		{
			if(start == NULL) 
			{
				start = new Node;
				start -> previous = NULL;
				start -> data = n;
				start -> next = NULL;
			}
			else
			{
				// Traversing 2 way Linked List -> In forward direction
				current = start;
				while(current -> next != NULL)
				{
					current = current -> next;
				}
				
				// Create & add new node at end
				temp = new Node;
				temp -> previous = current;
				temp -> data = n;
				temp -> next = NULL;
				
				current -> next = temp;	
			}
		}
		
		// Member function to print
		void print()
		{
			cout << "Data in Two Way Linked List" << endl;
			
			current = start;
			while(current -> next != NULL)
			{
				cout << current -> data << "\t";
				current = current -> next;
			}
			
			cout << current -> data << endl;
		}
		
		// Member function to print in reverse order
		void printReverse()
		{
			cout << "Data in Two Way Linked List - Reverse" << endl;
			
			// forward traverse
			current = start;
			while(current -> next != NULL)
			{
				//cout << current -> data << "\t";
				current = current -> next;
			}
			
			// print backward
			last = current;
			while(last -> previous != NULL)
			{
				cout << last -> data << "\t";
				last = last -> previous;
			}
			
			cout << last -> data << endl;
		}
};
// Class TwoWayLinkedList End

// Main function
int main()
{
	cout << "******** Two Way Linked List **********" << endl;
	TwoWayLinkedList obj;
	
	int value;
	
	cout << "\nEnter five value : " << endl;
	for(int i=0;i<5;i++)
	{
		cin >> value;
		obj.append(value);
	}
	obj.print();
	
	obj.printReverse();
	
	return 0;
}
