/*
	Program to insert value at specified location in Arrays
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
		int arr[5];
	
	public:
		// Member function to assign values to array
		assign(int p[])
		{
			for(int i=0;i<=3;i++)
			{
				arr[i] = p[i];
			}
		}	
		
		// Member function to insert value into array
		insert(int loc, int val)
		{
			// Make space for new value val
			for(int i=4; i>=loc; i--)
			{
				arr[i+1] = arr[i];
			}
			
			arr[loc] = val;
		}
		
		// Member function to print all values
		print(int n)
		{
			for(int i=0;i<=n;i++)
			{
				cout << arr[i] << endl;
			}
		}
};

int main()
{
   Arrays obj;
   int arr[4] = { 44, 55, 6, 3 };
   int pos, n;
   
   obj.assign(arr);
   
   cout << "Values BEFORE insertion:\n";
   obj.print(3);
   
   cout << "Enter value to insert: ";
   cin >> n;
   cout << "Enter position to insert: ";
   cin >> pos;
   
   if(pos >= 5)
   {
   		cout << "Invalid Location\n";
   		return 0;
   }
   
   obj.insert(pos, n);
   
   cout << "Values AFTER insertion:\n";
   obj.print(4);
	
   return 0;
}

