/*
	Bubble Sort
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-11-25
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include<iostream>
#include<conio.h>
using namespace std;
class BubbleSort
{
	private:
		int arr[5];
	
	public:
		
		// Member function to input data into array
		void input()
		{
			cout << "Enter 5 values: " << endl;
			for(int i=0; i<5; i++) 
			{
				cin >> arr[i];	
			}
		}
		
		// Member function to sort array in ascending order
		void sort()
		{
			int temp;
		    for(int i=0; i<5; i++)
		    {
		        for(int j=i+1; j<5; j++)
		        {
		            //If there is a smaller element found on right of the array then swap it.
		            if(arr[j] < arr[i])
		            {
		                temp = arr[i];
		                arr[i] = arr[j];
		                arr[j] = temp;
		            }
		        }
		    }
		}
		
		// Member function to print
		void print()
		{
			for(int i=0; i<5; i++) 
			{
				cout << arr[i] << "\t";
			}
		}
};
// Class BubbleSort End

// Main function
int main()
{
	cout << "******** Bubble Sort **********" << endl;
	BubbleSort obj;
	int value;
	obj.input();
	cout << "\nBefore Sorting : " << endl;
	obj.print();
	obj.sort();
	cout << "\nAfter Sorting : " << endl;
	obj.print();
	return 0;
}
