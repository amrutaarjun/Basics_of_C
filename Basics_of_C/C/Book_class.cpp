/* Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */


#include<iostream>
#include<string.h>
using namespace std;
class Book
{
	char bname[20];
	int id;
	char Author[20];
	double price;
	
public:	
	Book()
	{   cout<<"\n Default Constructor Called";
	    cout<<"\n \n";
	    strcpy(this->bname,"Not given");
		this->id=0;
		strcpy(this->Author,"Not given");
		this->price=0;
	}
	
	Book(char* nm, int i, char* A, double p)
	{
		cout<<"\n Parameterized Constructor Called";
	    cout<<"\n \n";
	    strcpy(this->bname,nm);
		this->id=i;
		strcpy(this->Author,A);
		this->price=p;
	}
	
	void setName(char* nm)
	{
	   strcpy(this->bname,nm);
	}
	void setId(int i)
	{
		this->id=i;
	}
	void setAuthor(char* A )
	{
		strcpy(this->Author,A );
	}
	void setPrice(double p)
	{
		this->price=p;
	}
	
	char* getName()
	{
		return this->bname;
	}
	int getId()
	{
		return this->id;
	}
   char* getAuthor()
	{
		return this->Author;
	}
	int getPrice()
	{
		return this->price;
	}
	void display()
	{
		cout<<"\n The Book name is:" << this->bname;
		cout<<"\n The Book id is:" << this->id;
		cout<<"\n The The Author name is:" << this->Author;
		cout<<"\n The Book price is:" <<this->price;
	}

};
int main()
{
	Book b1;
	b1.display();
	cout<<"\n";
	
	Book b2("Mritinjay",203,"ShivajiSawant",550.80);
	b2.display();
	cout<<"\n";
	
	return 0;
}
