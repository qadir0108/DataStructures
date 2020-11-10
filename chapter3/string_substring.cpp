/*
	Program - SubString of a given String
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
	private:
		char str[20];
		
	public:
		// Member function to extract string
		substr(char s[], int loc, int c)
		{
			for(int i=loc; i<=c ; i++)
			{
				str[i] = s[i];
				str[i+1] = '\0';
			}
			
			cout << "Substring from " << loc << " to " << c << " => ";
			cout << str << endl;
		}	
};

int main()
{
   	Strings obj;
   
	for(int c=0; c<=7; c++)
	{
		obj.substr("PAKISTAN", 0, c);
	}   
   return 0;
}

