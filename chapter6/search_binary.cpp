/*
	Binary Search
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-11-24
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
			int mid;
			int loc = -1;
			mid = 0 + 9 / 2;
			if(x == arr[mid]) 
			{
				cout << "Required value found at MID";
			}
			if(x > arr[mid]) 
			{
				for(int i = mid + 1 ; i<=9; i++) 
				{
					if(x == arr[i]) 
					{
						loc = i+1;
						break;	
					}
				}	
			}
			else
			{
				for(int i = mid ; i>=0; i--) 
				{
					if(x == arr[i]) 
					{
						loc = i+1;
						break;	
					}
				}	
			}
			
			if(loc == -1) 
				cout << "Data NOT FOUND";
			else
				cout << "Data FOUND at Location : " << loc;	
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
