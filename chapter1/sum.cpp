#include <iostream>
#include <conio.h>
using namespace std;

class sum 
{
	private:
		int n, m, s;
	
	public:
		intput()
		{
			cout << "Enter first number:";
			cin >> n;
			
			cout << "Enter second number:";
			cin >> m;
		}	
		
		print()
		{
			s = n + m;
			cout << " Sum = " << s;
		}
};

int main()
{
	system("cls");
   	sum obj;
   	obj.intput();
   	obj.print();
	getchar();
	return 0;
}

