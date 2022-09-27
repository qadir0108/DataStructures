/*
	Program to revise OOP
	v:		1.0
	Date:	2022-09-27
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include <iostream>
#include <conio.h>
using namespace std;

class Student 
{
	private:
		int rollNumber;
		char name[100];
		int marks;
	
	public:
		input()
		{
			cout << "Enter Roll Number:";
			cin >> rollNumber;
			
			cout << "Enter Name:";
			cin >> name;
			
			cout << "Enter Marks:";
			cin >> marks;
		}	
		
		print()
		{
			cout << "================= Student Record =================\n";
			cout << rollNumber << "\n";
			cout << name << "\n";
			cout << marks << "\n";
			cout << "\n==================================================\n";
		}
};

int main()
{
	// Create Object
   	Student s1;
   	
   	// Call Function to take input
	s1.input();
	
	// Call function to print variable values of Object 
	s1.print();
	
	Student s2;
	s2.input();
	s2.print();
	
	return 0;
}

