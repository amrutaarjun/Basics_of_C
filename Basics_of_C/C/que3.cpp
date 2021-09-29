/*Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
 class point
 {
 	int x;
 	int y;
 public:
 	point()
 	{
 	  this->x=0;
	  this->y=0;
	 	
	}
	point(int a,int b)
 	{
 	  this->x=a;
	  this->y=b;
	 	
	}
void Display()
	{
		cout<<"Data members 0f point x="<<this->x<<"y="<<this->y;
	
	  void setValue()
     	{
	    	cout<<"Enter the values for x andd y\n";
	    	cout<<"y=";
	    	cin>>x;
	    	cout<<"y=";
	    	cin>>y;
    	}
   	 void getValue()
     	{
	    	cout<<"The values of x"<<x<<" and y are"<<y;
		
     	}
	}
 } 
	
 int main()
 {
 	point p1(4,6),p2(3,5);
 	p1.Display();
	p2.Display();
 	p1.getValue();
 	p2.setValue();
 	p2.Display();
 	
    
 	
 }
