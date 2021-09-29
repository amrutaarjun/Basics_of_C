/* Create a class ComplexNumber with data members real, imaginary. Create Default and 
Parameterized constructors. Write getters and setters for all the data members. Also add the display 
function. Create the object of this class in main method and invoke all the methods in that class. */

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class complex
{
	int r;
	float i;
public:
	complex()
	{
		this->r=0;
		this->i=0.00;
	}
		complex(int a, float b)
	{
		this->r=a;
		this->i=b;
	}
	void display()
	{
		cout<<"\nValue of real and imaginary numbers are \nreal="<<r<<"\nimaginary="<<i;
		cout<<"\n-------------\n";
	}
	void setValue()
	{
		cout<<"\nEnter the values of real and complex:\n";
		cout<<"\nreal=";
		cin>>r;
		cout<<"\ncomplex=";
		cin>>i;
	}
		void getValue()
	{
		cout<<"\nThe values of real and complex are:\n";
		cout<<"\nreal="<<r;
		cout<<"\nimaginary="<<i;
		cout<<"\n----------------\n";
		
	}
};
int main()
{
	complex c1(4,57.77);
	c1.display();
	c1.setValue();
	c1.getValue();
	c1.display();	
}
