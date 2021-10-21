/*
	Double Ended Queues Program
	Data Structures using C++ - Examples
	Version:1.0 	Date:	2020-11-09
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
		
		void insertBack(int n);
		void insertFront(int n);
		
		void deleteFront();
		void deleteBack();
		
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
		cout << "1 - Insert from BACK\n";
		cout << "2 - Insert from FRONT\n";
		cout << "3 - Delete from FRONT\n";
		cout << "4 - Delete from BACK\n";
		cout << "5 - Exit\n";
		cout << "Enter your choice : ";
		cin >> option;
		
		switch(option)
		{
			case 1:
				cout << "1 - Insert from BACK\n";
				cout << "Enter your value: ";
				cin >> value;
				
				obj.insertBack(value);
				
				cout << "\n******* Double-Ended Queue after INSERT from BACK ******* \n";
				obj.print();
				
				break;
			
			case 2:
				cout << "2 - Insert from FRONT\n";
				cout << "Enter your value: ";
				cin >> value;
				
				obj.insertFront(value);
				
				cout << "\n******* Double-Ended Queue after INSERT from FRONT ******* \n";
				obj.print();
				
				break;
				
			case 3:
				obj.deleteFront();
				
				cout << "\n******* Double-Ended Queue after DELETE from FRONT ******* \n";
				obj.print();
				
				break;
				
			case 4:
				obj.deleteBack();
				
				cout << "\n******* Double-Ended Queue after DELETE from BACK ******* \n";
				obj.print();
				
				break;
		}
	}
	
	return 0;
}

	// Member function to insert item from back side
	void StudentQueue::insertBack(int n)
	{
		// When Q is FULL
		if(front == 0 && back == 9)
		{
			cout << "Double-Ended Queue is Full... Please Wait outside...";
			return;
		}

		// When Q is EMPTY and this is first item to insert
		if(front == -1 && back == -1)
		{
			back = front = 0;
			q[back] = n;
		} 
		
		// Normal Condition
		else if(back < 9)
		{
			back = back + 1;
			q[back] = n;
		}
		
		// When back == 9
		else
		{
			cout << "Double-Ended Queue => No Space from BACK Side";
			return;
		}
	}
	
	// Member function to insert item from front side
	void StudentQueue::insertFront(int n)
	{
		// When Q is FULL
		if(front == 0 && back == 9)
		{
			cout << "Double-Ended Queue is Full... Please Wait outside...";
			return;
		}
		
		// When Q is EMPTY and this is first item to insert
		if(front == -1 && back == -1)
		{
			back = front = 0;
			q[front] = n;
		}
		
		// Normal Condition
		else if(front > 0)
		{
			front = front - 1;
			q[front] = n;
		}
		
		// When front == 0
		else
		{
			cout << "Double-Ended Queue => No Space from FRONT Side";
			return;
		}
	}
	
	// Member function to delete item from front side
	void StudentQueue::deleteFront()
	{
		int n;
		
		// When Q is EMPTY
		if(front == -1 && back == -1) 
		{
			cout << "Double-Ended Queue is Empty";
			return;
		}
		
		// When front reached at back position 
		if(front == back)
		{
			front = back = -1;
		}
		
		// When front reached at last position 
		else if(front == 9)
			front = -1;
		
		// Normal Situation
		else
			front = front + 1;
	}
	
	// Member function to delete item from back side
	void StudentQueue::deleteBack()
	{
		int n;
		
		// When Q is EMPTY
		if(front == -1 && back == -1) 
		{
			cout << "Double-Ended Queue is Empty";
			return;
		}
		
		// When back reached at front position 
		if(front == back)
		{
			front = back = -1;
		} 
		
		// Normal Situation
		else
			back = back - 1;
	}
	
	// Member function to PRINT data from De-Queue
	void StudentQueue::print()
	{
		if(front == -1) 
		{
			cout << "Double-Ended Queue is Empty";
			return;
		}
		
		for(int i = front; i <= back; i++)
		{
			cout << q[i] << "\t"; 
		}
	}
