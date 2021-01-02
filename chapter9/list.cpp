/*
	Linked List Data Structure from Library
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2021-01-01
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include<iostream>
#include<conio.h>
#include <list>
using namespace std;

// Main function
int main()
{
	cout << "******** Linked List Data Structure - From Library **********" << endl;
	list<int> *adj;
	adj = new list<int>;
	
	adj -> push_back(12);
	adj -> push_back(23);
	adj -> push_back(65);
	adj -> push_back(34);
	
	cout << endl << "List Data" << endl;
	list<int>::iterator i;
	for (i = adj -> begin(); i != adj -> end(); ++i)
    {
		cout << *i << "\t";
    }

	return 0;
}
