/*
	Program to Sum two numbers
	Data Structures using C++ - Examples
	v:		1.0
	Date:	2020-09-24
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include <iostream>
#include <conio.h>
using namespace std;

class sum 
{
	private:
		int n, m, s;
	
	public:
		intput()
		{
			cout << "Enter first number:";
			cin >> n;
			
			cout << "Enter second number:";
			cin >> m;
		}	
		
		print()
		{
			s = n + m;
			cout << " Sum = " << s;
		}
};

int main()
{
   sum obj;
   obj.intput();
   obj.print();
	
   return 0;
}

