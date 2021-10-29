/*
	Binary Search
	Data Structures using C++ - Examples
	Version:	2.0
	Date:		2021-10-29
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include<iostream>
#include<conio.h>
using namespace std;
class BinarySearch
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
		
		// Member function to sort array in ascending order
		void sort()
		{
			int temp;
		    for(int i=0; i<10; i++)
		    {
		        for(int j=i+1; j<10; j++)
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
			cout << "Sorted Array " << "\n";
			for(int i=0; i<10; i++) 
			{
				cout << arr[i] << "\t";
			}
		}
		
		// Member function to search data from array
		void search(int x)
		{
			int loc = -1;
			int start = 0;
			int end = 9;
			int mid;
			
			while(start <= end) 
			{
				mid = (start + end)/ 2;
				if(x == arr[mid]) 
				{
					loc = mid;
					break;
				}
				else if(x < arr[mid]) 
				{
					end = mid - 1;
				}
				else
				{
					start = mid + 1;
				}
			}
			
			if(loc == -1) 
				cout << x << " NOT FOUND";
			else
				cout << x << " FOUND at Location : " << (loc+1);	
		}
		
};
// Class BinarySearch End

// Main function
int main()
{
	BinarySearch obj;
	int value;
	obj.input();
	obj.sort();
	obj.print();
	cout << "\nEnter required value to Search : ";
	cin >> value;
	obj.search(value);
	return 0;
}
