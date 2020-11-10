/*
	Program to Traverse Arrays
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-11-10
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include <iostream>
#include <conio.h>
using namespace std;

class Arrays 
{
	private:
		int arr[10];
	
	public:
		// Member function to input data into array
		intput()
		{
			cout << "Enter ten values and press enter after typing each value\n";
			for(int i=0;i<=9;i++)
			{
				cin >> arr[i];
			}
		}	
		
		// Member function to PRINT EVEN numbers
		printEven()
		{
			cout << "These are EVEN values in array\n";
			
			for(int i=0;i<=9;i++)
			{
				if(arr[i] % 2 == 0)
				cout << arr[i] << endl;
			}
		}
};

int main()
{
   Arrays obj;
   obj.intput();
   obj.printEven();
	
   return 0;
}

