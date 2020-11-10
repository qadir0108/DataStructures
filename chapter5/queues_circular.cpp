/*
	Circular Queues Program
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-11-09
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include<iostream>
#include<conio.h>
using namespace std;
class StudentQueue
{
	private:
		int front, rear;
		int q[5];
	
	public:
		StudentQueue()
		{
			front = -1;
			rear = -1; 
		}
		
		void insertQueue(int n)
		{
			if(front == 0 && rear == 4)
			{
				cout << "Circular Queue is Full... Please Wait outside...";
				return;
			}
			if(front == -1)
			{
				front = 0;
				rear = 0;
			}
			else if (rear == 4)
			{
				rear = 0;
			} 
			else
			{
				rear = rear + 1;
			}
			
			q[rear] = n;	
				
			// Open the window
			if(front == -1) front = 0;
		}
		
		int deleteQueue()
		{
			int n;
			if(front == -1) 
			{
				cout << "Circular Queue is Empty";
				return -1;
			}
			
			n = q[front];
			
			if(front == rear)
			{
				front = rear = -1;
			} 
			else if(front == 4)
				front = 0;
			else
				front = front + 1;
			
			return n;
			
		}
		
		void print()
		{
			if(front == -1) 
			{
				cout << "Circular Queue is Empty";
				return;
			}
			
			for(int i = front; i <= rear; i++)
			 {
			 	cout << q[i] << "\t"; 
			 }
		}
};
// Class CircularQueue End

// Main function
int main()
{
	StudentQueue obj;
	int option = 99, value;
	
	while(option != 3)
	{
		cout << "\n *** Circular Queue - Menu ***\n";
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
				
				cout << "\n******* Circular Queue after INSERT ******* \n";
				obj.print();
				
				break;
			
			case 2:
				value = obj.deleteQueue();
				cout << value << " is deleted.";
				
				cout << "\n******* Circular Queue after DELETE ******* \n";
				obj.print();
				
				break;
		}
	}
	
	return 0;
}
