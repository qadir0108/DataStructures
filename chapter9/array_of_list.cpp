/*
	Array of Linked List Data Structure from Library
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
	cout << "******** Array of Linked List Data Structure - From Library **********" << endl;
	list<int> *adj;
	adj = new list<int>[2];
	
	adj[0].push_back(112);
	adj[0].push_back(123);
	adj[0].push_back(165);
	adj[0].push_back(134);
	
	adj[1].push_back(212);
	adj[1].push_back(223);
	adj[1].push_back(265);
	adj[1].push_back(234);
	
	cout << endl << "Array Element 0 - List 1" << endl;
	list<int>::iterator i;
	for (i = adj[0].begin(); i != adj[0].end(); ++i)
    {
		cout << *i << "\t";
    }
		
	cout << endl << "Array Element 1 - List 2" << endl;
	list<int>::iterator j;
	for (j = adj[1].begin(); j != adj[1].end(); ++j)
    {
		cout << *j << "\t";
    }
	return 0;
}
