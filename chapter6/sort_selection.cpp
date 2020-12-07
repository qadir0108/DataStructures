/*
	Selection Sort
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-11-25
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include<iostream>
#include<conio.h>
using namespace std;
class SelectionSort
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
			int min;
			int loc;
		    for(int i=0; i<5-1; i++)
		    {
		    	min = arr[i]; // Assume arr[0] is min
		    	loc = i;
		        for(int j=i; j<5; j++)
		        {
		        	// Find min
		            if(arr[j] < min)
		            {
		            	min = arr[j];
		            	loc = j;
					}
					
		            // Just swap 
					// current item arr[i] with arr[loc] 
					// min is at location loc
					// arr[i] is to-be location of min number
	                temp = arr[loc];
	                arr[loc] = arr[i];
	                arr[i] = temp;
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
// Class SelectionSort End

// Main function
int main()
{
	cout << "******** Selection Sort **********" << endl;
	SelectionSort obj;
	int value;
	obj.input();
	cout << "\nBefore Sorting : " << endl;
	obj.print();
	obj.sort();
	cout << "\nAfter Sorting : " << endl;
	obj.print();
	return 0;
}
