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
			// Create New Node
			temp = new Node;
			temp -> previous = NULL;
			temp -> data = n;
			temp -> next = NULL;
			
			if(start == NULL) 
			{
				start = temp;
			}
			else
			{
				// Traversing 2 way Linked List -> In forward direction
				current = start;
				while(current -> next != NULL)
				{
					current = current -> next;
				}
				
				// Upate last node next - Append new Node in the last
				current -> next = temp;	
				
				// Update new Node - Link new Node with last node
				temp -> previous = current;
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
