/*
	Linked List - Insert in
	1. At End
	2. At Start
	3. At Specified Location
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

class LinkedListInsert
{
	private:
		Node* start;
		Node* current;
		Node* temp;
	
	public:
		
		LinkedListInsert() 
		{
			start = NULL;
		}
		
		// Member function to insert at End
		void insertEnd(int n)
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
		
		// Member function to insert at Start
		void insertStart(int n)
		{
			temp = new Node;
			temp -> data = n;
			temp -> link = start;
			start = temp;
		}
		
		// Member function to insert at Specified Position
		int insertPosition(int n, int position)
		{
			// Go to specified postion
			current = start;
			for(int i=1; i<position-1;i++)
			{
				current = current -> link;
				if(current == NULL) 
				{
					cout << "Invalid Postion";
					return -1;
				}
			}
			
			// Now link new temp node after current node 
			temp = new Node;
			temp -> data = n;
			temp -> link = current -> link;
			current -> link = temp; 
			
			return 0; 
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
// Class LinkedListInsert End

// Main function
int main()
{
	cout << "******** Linked List Insert **********" << endl;
	LinkedListInsert obj;
	
	int value;
	int position;
	
	cout << "\nEnter 3 values to *Insert At End* : " << endl;
	for(int i=0;i<3;i++)
	{
		cin >> value;
		obj.insertEnd(value);
	}
	obj.print();
	
	cout << "\nNow Enter 1 value, it will be *Insert At Start* : " << endl;
	cin >> value;
	obj.insertStart(value);
	obj.print();
	
	cout << "\nNow Enter 1 value & position, it will be *Insert At Specified Location* : " << endl;
	cout << "Enter value: "; 
	cin >> value;
	cout << "Enter position: "; 
	cin >> position;
	obj.insertPosition(value, position);
	obj.print();
	
	return 0;
}
