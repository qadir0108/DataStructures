/*
	Program - Pattern matching of SubString in a given String
	String Length = len
	SubString Length = sublen
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
		char str[30], substr[30];
		int len, sublen, total;
		
	public:
		// Member function to input String and Substring
		input()
		{
			cout << "Enter String: "; cin >> str;
			cout << "Enter SubString: "; cin >> substr;
		}
		
		// Member function to calculate lengths of string and substring
		length()
		{
			int i = 0;
			while(str[i] != '\0')
				i++;
			len = i;
				
			i = 0;
			while(substr[i] != '\0')
				i++;
			sublen = i;
			
			total = len - sublen + 1;
		
			cout << "Length of String: " << len << endl;
			cout << "Length of SubString: " << sublen << endl;
		}
		
		// Member function to match pattern
		match()
		{
			int i, j;
			for(int i = 0; i <= total ; i++)
			{
				for(int j = 0; j <= sublen; j++)
				{
					if(j == sublen) 
					{
						cout << "Pattern MATCHED at position: " << i;
						return 0;	
					}
				
					// Matching each character of substr with each charachter in str
					// If NOT EQUAL then skip, move to next charachter
					if(substr[j] != str[i+j])
					{
						break;	
					}
				}
			}
			cout << "Pattern NOT MATCHED";
		}	
};

int main()
{
   	Strings obj;
   
   	obj.input();
   	obj.length();
   	obj.match();
	   
   	return 0;
}

