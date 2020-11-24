/*
	Sequential Search
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-11-24
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include<iostream>
#include<conio.h>
using namespace std;
class SequentialSearch
{
	private:
		int arr[10];
	
	public:
		
		// Member function to input data into array
		void input()
		{
			cout << "Enter 10 values: " << endl;
			for(int i=0; i<10; i++) 
			{
				cin >> arr[i];	
			}
		}
		
		// Member function to search data from array
		void max()
		{
			int i = 0;
			int loc = -1;
			int max;
			// 4 5 6
			max = arr[0]; // 4			
			while(i <= 9) 
			{
				if(arr[i] > max) 
				{
					max = arr[i];
				}
				i++;	
			}
			
			if(loc == -1)
				cout << "Data NOT FOUND";
		}
		
};
// Class SequentialSearch End

// Main function
int main()
{
	SequentialSearch obj;
	int value;
	obj.input();
	cout << "Enter required value to Search : ";
	cin >> value;
	obj.search(value);
	return 0;
}
