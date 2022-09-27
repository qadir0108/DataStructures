/*
	Coding - Revision
	Coding has five main concepts
	1. Varibles
	2. If Condition / Conditional Structure
	3. Loops
	4. Arrays
	5. Functions
	v:		1.0
	Date:	2022-09-23
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include <iostream>
#include <conio.h>
using namespace std;

// Add function
int add(int a, int b) 
{
	return a + b;
}

// Main function
int main()
{

	/* 
		1. Variables
		To save some value
	*/
	int marks = 80;
	
	// input
	cin >> marks;
	
	// output
	cout << marks;

	// Variable data types
	double gpa = 3.14;
	char name[20] = "Kamran";
	bool isPass = true;

	/* 
		2. If Condition
		To check / test value of varaible
	*/
	char grade;
	if(marks >= 80)
		grade = 'A';

	// Gender can be 'M' / 'F'
	char gender = 'F';
	if(marks >= 80 && gender == 'F')
		grade = 'A';

	/* 
		3. Loops
		To repeat any line of code
	*/
	for( int i = 0 ; i < 5; i++ )
	{
		cout << "Pakistan\n";
	}
	
	/* 
		4. Arrays
		To store multiple value under one name
	*/
	int arr[5];
	
	// saving
	arr[0] = 80;
	
	// input
	cin >> arr[1];
	
	// output
	cout << arr[1];
	
	// arrays using loop
	for( int i = 0 ; i < 5; i++ )
	{
		cin >> arr[i];
		cout << arr[i];
	}
	
	
	/* 
		5. Functions
		Breaking the coding into small pieces.
		created a function above
	*/
	cout << add(10, 5);
	
	// calling with variables
	int x = 10;
	int y = 20;
	cout << add(x, y);
	
	// saving result of function call
	int result = add(10, 20);
	cout << result;
	
   	return 0;
}
