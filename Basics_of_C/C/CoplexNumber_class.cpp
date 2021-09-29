/* Create a class ComplexNumber with data members real, imaginary. Create Default and 
Parameterized constructors. Write getters and setters for all the data members. Also add the display 
function. Create the object of this class in main method and invoke all the methods in that class.  */
using namespace std;
#include<string.h>
#include<iostream>
class ComplexNumber
{
	int real;
	int imag;
public:	
	ComplexNumber()
	{   cout<<"\n Default constructor called";
		cout<<"\n";
		this->real=0;
		this->imag=0;
	}
	ComplexNumber(int r,int i)
	{
		cout<<"\n Parameterized constructor called";
		cout<<"\n";
		this->real=r;
		this->imag=i;
	}
	void setValues()
	{
		this->real;
		this->imag;
	}
	int getValues()
	{
	 return	this->real;
	 return this->imag;
	}
	void display()
	{
		cout<<"\n The real value :"<< this->real;
		cout<<"\n The imaginary value :"<< this->imag;
	}
};
int main()
{
	ComplexNumber c1;
	c1.display();
	cout<<"\n--------------";
	cout<<"\n";
	
	ComplexNumber c2(5 ,3);
	c2.display();
	cout<<"\n-------------";
	
	
}
