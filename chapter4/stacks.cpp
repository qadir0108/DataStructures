/*
	Program - Stacks
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-11-10
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include <iostream>
#include <conio.h>
using namespace std;

class Stacks 
{
	private:
		int top;
		int arr[10];
		
	public:
		
		// Constructor to initialize
		Stacks()
		{
			top = -1;	
		}
		
		// Member function to push item to stack
		void push(int n)
		{
			if(top == 9)
			{
				cout << "Stack overflow";
				return;
			}
			
			top++;
			arr[top] = n;
		}
		
		// Member function to delete item from stack
		int pop()
		{
			int data;
			if(top == -1)
			{
				cout << "Stack is EMPTY";
				return -999;
			}
			
			data = arr[top];
			top--;
			
			return data;
		}
		
		// Member function to print items of stack
		void print()
		{
			if(top == -1)
			{
				cout << "Stack is EMPTY";
				return;
			}
			
			for(int i=top; i>=0; i--)
				cout << arr[i] << endl;
		}
};

int main()
{
   	Stacks obj;
	int option = 99, value;
	
	while(option != 3)
	{
		cout << "\n *** Menu ***\n";
		cout << "1 - Push\n";
		cout << "2 - Pop\n";
		cout << "3 - Exit\n";
		cout << "Enter your choice : ";
		cin >> option;
		
		switch(option)
		{
			case 1:
				cout << "Enter your value: ";
				cin >> value;
				
				obj.push(value);
				
				cout << "\n******* Stack after PUSH ******* \n";
				obj.print();
				
				break;
			
			case 2:
				value = obj.pop();
				cout << value << " is POPED.";
				
				cout << "\n******* Stack Queue after POP ******* \n";
				obj.print();
				
				break;
		}
	}
	
   return 0;
}

