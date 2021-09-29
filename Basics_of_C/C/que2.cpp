 /*Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data 
 members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.  
3*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
 

class date
{
	int dd;
	int mm;
	int yy;
public:
	date()
	{
		this->dd=0;
		this->mm=0;
		this->yy=0;
		
	}
void setMembersDob(int d,int m,int y)
   {
   	this->dd=d;
	this->mm=m;	
	this->yy=y;	
   }
  int getdat()
   {
   	return this->dd;	
   }
   	 int getmon()
   {
   	return this->mm;	
   }
   	
 	 int getyear()
   {
   	return this->yy;	
   }
   void display()
   {
   	cout<<"The dob of members is \n"<<dd<<"/"<<mm<<"/"<<yy;
   	cout<<"     ";
   }
   	

};
int main()
{
	date mem;
   	mem.setMembersDob(25,05,1997);
	//cout<<"date of birth of member of institute is%d %d %d "<<mem.getdat()<<"/"<<mem.getmon()<<"/"<<mem.getyear();
	mem.display();
}
