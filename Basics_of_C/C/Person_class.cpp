/*Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.*/  


#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	char name[20];
	int age;
	char city[20];
public:	
	Person()//default constructor
	{   cout<< "\n Default constructor called";
	    cout<<  "\n\n\n";
		strcpy (name, "Not given ");
	    strcpy(city,"Not given ");
		this->age=0;
	}
	Person(char* name, char* city, int age)//parameterised constructor
	{   cout<< "\n parameterized  constructor called";
	    cout<< "\n\n\n";
		strcpy (this->name, name);
	    strcpy(this->city,city);
		this->age=age;
	}
	
	void setName(char* name)
	{
		strcpy(this->name,name);
	}
	
	void setCity(char* city)
	{
		strcpy(this->city,city);
	}
	
	void setAge(int age)
	{
		this->age=age;
	}
	char* getName()
	{
		return this->name;
	}
	char* setCity()
	{
		return this->city;
	}
	int getAge()
	{
		return this->age;
	}
	
	void display()
	{
		cout<<"\n Name is" << this->name;
		cout<<"\n City is " << this->city;
		cout<<"\n The Age of person is " << this->age; 
    }
};
int main()
{ 
  
  Person p1;
  p1.display();
  cout<< "\n ";
  
  Person p2("Amruta", "pune", 23);
  p2.display();
  cout<< "\n";	
  return 0;
}
