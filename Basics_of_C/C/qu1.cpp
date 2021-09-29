/* Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.  
2*/

#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class person{
	
		char name[10];
		int age;
		char city[10];
	public:
		person()
		{
		   	strcpy(name,"\0");
			age=0;
			strcpy(city,"\0");
		}
	void setName(char* a)
		{
			strcpy(this->name,a);
		}
	void setAge(int b)
        {
        	this->age=b;
        	
		}
	void setCity(char *c )
	{
		strcpy(this->city,c);
	}
char* getName()
   {
   	return this->name;
   }
 int  getAge()
   {
   	return this->age;
   }
  char* getCity()
	 {
	 return	this->city;
	 }	
   void display()
   {
   	printf("\nName of person= %s \nAge of person =%d \nName of city=%s",this->name,this->age,this->city);
   }
   		
	
};
int main()
{
	person s1;
	s1.setName("Amruta");
	s1.setAge(23);
	s1.setCity("Pune");
//	printf("name of person= %s\n,age of person=%d\n,name of city= %s\n",s1.getName(),s1.getAge(),s1.getCity());
	s1.display();
	return 0;
}
