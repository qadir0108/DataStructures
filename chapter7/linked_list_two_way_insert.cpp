/*
	Two Way Linked List - Insert
	1. At Specified Location
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
		Node* prev;
		
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
		
		// Member function to insert after specific value
		void insertAfterSpecificValue(int n, int afterValue)
		{
			// Traversing 2 way Linked List -> In forward direction
			current = start;
			prev = start;
			while(current -> next != NULL)
			{
				if(current -> data == afterValue) 
				{
					cout << "\nNumber FOUND:" << current -> data;
					// move on step forward the current and previous node 
					// so that node can be created after value
					prev = current;
					current = current -> next;
					// Have to insert new node between prev & current
					temp = new Node;
					temp -> data = n;
					temp -> next = current;
					temp -> previous = prev;
					
					prev -> next = temp; 
					current -> previous = temp;
					break;
				}
				prev = current;
				current = current -> next;
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
	
};
// Class TwoWayLinkedList End

// Main function
int main()
{
	cout << "******** Two Way Linked List - InsertAfterSpecificValue **********" << endl;
	TwoWayLinkedList obj;
	
	int value;
	int afterValue;
	
	cout << "\nEnter five value : " << endl;
	for(int i=0;i<5;i++)
	{
		cin >> value;
		obj.append(value);
	}
	obj.print();
	
	cout << "\nNow After which value you want to Insert: " << endl;
	cin >> afterValue;
	cout << "\nNow Enter value to insert: " << endl;
	cin >> value;
	obj.insertAfterSpecificValue(value, afterValue);
	obj.print();

	return 0;
}
