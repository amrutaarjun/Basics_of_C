/* Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class.  */
using namespace std;
#include<iostream>
#include<string.h>
class Point
{
	int x;
	int y;
public:
	Point()
	{   cout<<"\n Default Constructor called";
	    cout<<"\n";
		this->x=0;
		this->y=0;
	}
	Point(int i,int j)
	{   cout<<"\n Parameterized  Constructor called";
	    cout<<"\n";
		this->x=i;
		this->y=j;
	}
 
	void setValues()
	{
	    this->x;
	    this->y;
    }
	int getValues()
	{
		return this->x;
		return this->y;
	}
	void display()
	{
		cout<<"\n The value of X : " <<x;
		cout<<"\n The value of Y : " <<y;
	}
};
int main()
{   
	Point p1;
	p1.display();
    cout<<"\n---------------";
	cout<<"\n";
	
	Point p2(7,9);
	p2.display();

	
}
