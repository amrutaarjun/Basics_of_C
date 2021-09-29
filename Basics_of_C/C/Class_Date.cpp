/* Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.*/
#include<iostream>
#include<string.h>
using namespace std;
class Date
{
	int date;
	int month;
	int year;
	
public:	
	Date()
	{   cout<<"\n Default Constructor Called";
	    cout<<"\n \n";
		this->date=0;
		this->month=0;
		this->year=0;
	}
	
	Date(int dd,int mm,int yy)
	{
		cout<<"\n Parameterized Constructor Called";
	    cout<<"\n \n";
		this->date=dd;
		this->month=mm;
		this->year=yy;
	}
	
	void setDate(int dd)
	{
		this->date=dd;
	}
	void setMonth(int mm)
	{
		this->month=mm;
	}
	void setYear(int yy)
	{
		this->year=yy;
	}
	int getDate()
	{
		return this->date;
	}
	int getMonth()
	{
		return this->month;
	}
	int getYear()
	{
		return this->year;
	}
	void display()
	{
		cout<<"\n The Date of Birth is:" << this->date;
		cout<<"\n The Month of Birth is:" << this->month;
		cout<<"\n The Year of Birth is:" << this->year;
	}

};
int main()
{
	Date d1;
	d1.display();
	cout<<"\n";
	
	Date d2(25, 05, 1997);
	d2.display();
	cout<<"\n";
	
	return 0;
}
