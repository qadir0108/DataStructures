/*
	Simple Queues Program
	Data Structures using C++ - Examples
	Version:1.0 	Date:	2020-10-20
	Version:1.1 	Date:	2021-10-21
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include<iostream>
#include<conio.h>
using namespace std;
class StudentQueue
{
	private:
		int front, back;
		int q[10];
	
	public:
		StudentQueue()
		{
			front = -1;
			back = -1; 
		}
		
		void insertQueue(int n)
		{
			if(back >= 9)
			{
				cout << "Student Queue is FULL";
				return;
			}
			else
			{
				back = back + 1;
				q[back] = n;	
				
				// Open the window
				if(front == -1) front = 0;
			}
			
		}
		
		void deleteQueue()
		{
			int n = q[front];
			if(front == -1) 
			{
				cout << "Student Queue is EMPTY";
				return;
			}
			
			if(front == back)
			{
				front = back = -1;
			} 
			else
			{	
				front = front + 1;
			}
			
			cout << "DELETED: " << n;

		}
		
		void print()
		{
			if(front == -1) 
			{
				cout << "Student Queue is EMPTY";
				return;
			}
			
			for(int i = front; i <= back; i++)
			 {
			 	cout << q[i] << "\t"; 
			 }
		}
};
// Class StudentQueue End

// Main function
int main()
{
	StudentQueue obj;
	int option = 9999, value;
	
	while(option != 3)
	{
		cout << "\n *** Menu ***\n";
		cout << "1 - Insert\n";
		cout << "2 - Delete\n";
		cout << "3 - Exit\n";
		cout << "Enter your choice : ";
		cin >> option;
		
		switch(option)
		{
			case 1:
				cout << "Enter your value: ";
				cin >> value;
				
				obj.insertQueue(value);
				
				cout << "\n******* Student Queue after INSERT ******* \n";
				obj.print();
				
				break;
			
			case 2:
				obj.deleteQueue();
				
				cout << "\n******* Student Queue after INSERT ******* \n";
				obj.print();
				
				break;
		}
	}
	
	return 0;
}
