/*
	Simple Queues Program
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-10-20
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
				cout << "Student Queue is Full... Please Wait outside...";
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
		
		int deleteQueue()
		{
			int n;
			if(front == -1) 
			{
				cout << "Student Queue is Empty";
				return -9999;
			}
			
			n = q[front];
			
			if(front == back)
			{
				front = back = -1;
			} 
			else
			{	
				front = front + 1;
			}
			
			return n;
			
		}
		
		void print()
		{
			if(front == -1) 
			{
				cout << "Student Queue is Empty";
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
				value = obj.deleteQueue();
				if(value != -9999)
				{
					cout << value << " is deleted.";
				
					cout << "\n******* Student Queue after DELETE ******* \n";
					obj.print();
				}
				break;
		}
	}
	
	return 0;
}
