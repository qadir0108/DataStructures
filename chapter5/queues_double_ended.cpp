/*
	Double Ended Queues Program
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
		int q[10];
	
	public:
		StudentQueue()
		{
			front = -1;
			rear = -1; 
		}
		
		void insertFront(int n);
		void insertRear(int n);
		void deleteFront();
		void deleteRear();
		void print();
		
};
// Class StudentQueue End

// Main function
int main()
{
	StudentQueue obj;
	int option = 99, value;
	
	while(option != 5)
	{
		cout << "\n *** Double-Ended Queue Menu ***\n";
		cout << "1 - Insert from Front\n";
		cout << "2 - Insert from Rear\n";
		cout << "3 - Delete from Front\n";
		cout << "4 - Delete from Rear\n";
		cout << "5 - Exit\n";
		cout << "Enter your choice : ";
		cin >> option;
		
		switch(option)
		{
			case 1:
				cout << "1 - Insert from Front\n";
				cout << "Enter your value: ";
				cin >> value;
				
				obj.insertFront(value);
				
				cout << "\n******* Double-Ended Queue after INSERT from FRONT ******* \n";
				obj.print();
				
				break;
			
			case 2:
				cout << "2 - Insert from Rear\n";
				cout << "Enter your value: ";
				cin >> value;
				
				obj.insertRear(value);
				
				cout << "\n******* Double-Ended Queue after INSERT from REAR ******* \n";
				obj.print();
				
				break;
				
			case 3:
				obj.deleteFront();
				
				cout << "\n******* Double-Ended Queue after DELETE from FRONT ******* \n";
				obj.print();
				
				break;
				
			case 4:
				obj.deleteRear();
				
				cout << "\n******* Double-Ended Queue after DELETE from REAR ******* \n";
				obj.print();
				
				break;
		}
	}
	
	return 0;
}

	// Member function to insert item from front side
	void StudentQueue::insertFront(int n)
	{
		if(front == 0 && rear == 9)
		{
			cout << "Double-Ended Queue is Full... Please Wait outside...";
			return;
		}
		
		if(front == -1 && rear == -1)
		{
			rear = front = 0;
			q[front] = n;
		} 
		else if(front > 0)
		{
			front = front - 1;
			q[front] = n;
		}
		else
		{
			cout << "Double-Ended Queue => No Space from FRONT Side";
			return;
		}
	}
	
	// Member function to insert item from rear side
	void StudentQueue::insertRear(int n)
	{
		if(front == 0 && rear == 9)
		{
			cout << "Double-Ended Queue is Full... Please Wait outside...";
			return;
		}
		
		if(front == -1 && rear == -1)
		{
			rear = front = 0;
			q[front] = n;
		} 
		else if(rear < 9)
		{
			rear = rear + 1;
			q[rear] = n;
		}
		else
		{
			cout << "Double-Ended Queue => No Space from REAR Side";
			return;
		}
	}
	
	// Member function to delete item from front side
	void StudentQueue::deleteFront()
	{
		int n;
		if(front == -1 && rear == -1) 
		{
			cout << "Double-Ended Queue is Empty";
			return;
		}
		
		if(front == rear)
		{
			front = rear = -1;
		} 
		else if(front == 9)
			front = -1;
		else
			front = front + 1;
	}
	
	// Member function to delete item from rear side
	void StudentQueue::deleteRear()
	{
		int n;
		if(front == -1 && rear == -1) 
		{
			cout << "Double-Ended Queue is Empty";
			return;
		}
		
		if(front == rear)
		{
			front = rear = -1;
		} 
		else
			rear = rear - 1;
	}
	
	// Member function to PRINT data from De-Queue
	void StudentQueue::print()
	{
		if(front == -1) 
		{
			cout << "Double-Ended Queue is Empty";
			return;
		}
		
		for(int i = front; i <= rear; i++)
		 {
		 	cout << q[i] << "\t"; 
		 }
	}
