/*
	Two Way Linked List - Delete
	1. At Specified Location
	2  At End
	3. At Start
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-11-24
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

class TwoWayLinkedListDelete
{
	private:
		Node* start;
		Node* current;
		Node* temp;
		Node* prev;
		
	public:
		
		TwoWayLinkedListDelete() 
		{
			start = NULL;
		}
		
		// first insert 5 values at end
		
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
				
				// Create & add new node at end
				temp = new Node;
				temp -> previous = current;
				temp -> data = n;
				temp -> next = NULL;
				
				current -> next = temp;	
			}
		}
		
		// delete from end
			void deleteEnd()
		{
			// Traversing / Visitng Linked List
			current = start;
			prev = start;
			while(current -> next != NULL)
			{
				prev = current; 			 // this will be the second last node
				current = current -> next;	 
			}
			
			// current will be last node
			// prev will be second last node
			cout << "\nNumber from End DELETED: "<< current -> data;
			prev -> next = NULL;
			delete current;
		}
		
		void deleteStart()
		{
			cout << "\nNumber from Start DELETED: " << start -> data;
			start = start -> next;
		}
		
		// delete from specific location
		void deleteSpecificItem(int n)
		{
			// Go to specified node
			current = start;
			prev = start;
			while(current -> next != NULL) // for last node loop will break
			{
				// any specific value but must not be 1st node 
				if(current -> data == n && n != start -> data) 
				{
					cout << "\nNumber FOUND & DELETED:" << current -> data;
					prev -> next = current -> next;
					temp = current -> next;
					temp -> previous = prev;
					delete current;
					return;
				 }
				 
				 // if user entered first node value
				 else if(current -> data == n)
				 {
				 	cout << "\nNumber from Start DELETED: " << start -> data;
			   	    start = start -> next;
			   	    return;
				 }		
				prev = current;		
				current = current -> next;	
			}
			    
			     // if user entered last node data 
				 if(current -> data == n) 
					{   
					cout << "\nNumber FOUND & DELETED:" << current -> data;
					prev -> next = NULL;
					delete current;
					}
				else 
				{
					cout<<"\nDATA NOT FOUND\n";
					return;
				}
		}
		
		
		void print()
		{
			cout << "\n ============================================== \n Data in Two Way Linked List" << endl;
			
			current = start;
			while(current -> next != NULL)
			{
				cout << current -> data << "\t";
				current = current -> next;
			}
			
			cout << current -> data << endl;
		}
	
};
// Class TwoWayLinkedListDelete End

int main()
{
	cout << "******** Two Way Linked List - Deletetion **********" << endl;
	TwoWayLinkedListDelete obj;
	
	int value,m;
	int afterValue;
	
//	cout << "\nEnter five value : " << endl;
	for(int i=0;i<=30;i+=5)
	{
	//	cin >> value;
		obj.append(i);
	}
	obj.print();
	getch();
	// press any key to delete from last
	obj.deleteEnd();
	obj.print();
	getch();
	// then press any key to delete from start
	obj.deleteStart();
	obj.print();
	getch();
	// then press any key to delete from specific location
	cout<<endl<<"Enter to find the number: ";
	cin>>m;
	obj.deleteSpecificItem(m);
	obj.print();
	
	return 0;
}
