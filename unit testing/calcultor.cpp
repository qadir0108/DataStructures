/*
	Testing
*/
#include<iostream>
#include<conio.h>
using namespace std;

class Calculator
{
	public:
		int add(int x, int y) 
		{
			return x + y;
		}
		int multiply(int x, int y)
		{
			return x * y;
		}
};

class CalculatorTest
{
	public:
		void multiplyTest()
		{
			Calculator obj = new Calcultor();
			int a = 10;
			int b = 5;
			int expectedResult = 50;
			
			int result = obj.multiply(a, b);
			
			Assert.Equal(expectedResult, result);
		}
		
		void addTest()
		{
			Calculator obj = new Calcultor();
			int a = 10;
			int b = 5;
			int expectedResult = 15;
			
			int result = obj.add(a, b);
			
			Assert.Equal(expectedResult, result);
		}	
}
