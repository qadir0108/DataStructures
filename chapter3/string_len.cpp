/*
	Program - Length of String
	Data Structures using C++ - Examples
	Version:1.0
	Date:	2020-11-10
	Author:	Kamran Qadir (kamran.qadir@bzu.edu.pk)
*/
#include <iostream>
#include <conio.h>
using namespace std;

class Strings 
{
	public:
		// Member function to calculate length of given string
		int len(char str[])
		{
			int i=0;
			for(; str[i]!='\0'; i++)
			{
				
			}
			return i;
			
			// Other logic
			//while(str[i]!='\0')
			//{
			//	i++;
			//}
		}	
};

int main()
{
   Strings obj;
   
   char s[80] = "My name is Kamran and I teach programming!";
   
   cout<< s;
   cout << "\nLength of String is : " << obj.len(s);
   	
   return 0;
}

