 /* Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
 class book
 {
 	char  Bname[10];
 	int id;
 	char Author[10];
 	int Price;
public: 
 book()
 {
 	strcpy(this->Bname,"0");
 	this->id=0;
 	strcpy(this->Author,"\0");
 	this->Price=0;
 	
 }
 book(char* b,int i,char* a,int p)
 {
 	strcpy(this->Bname,b);
 	this->id=i;
 	strcpy(this->Author,a);
 	this->Price=p;
 	
 	
 }
 display()
 {
 	cout<<"The book name is:"<<Bname;
 	cout<<"\nThe book id is:"<<id;
 	cout<<"\nThe book author is:"<<Author;
 	cout<<"\nThe book price is:"<<Price;
 	cout<<"\n----------\n";
 }
 
 void setvalues()
 {
 	cout<<"Display the values for following information..\n";
 	cout<<"Enter the book name\n";
 	cin>>this->Bname;
 	cout<<"Enter book id:\n";
 	cin>>this->id;
 	cout<<"Enter the author name:\n";
 	cin>>this->Author;
 	cout<<"Enter the price of book:\n";
 	cin>>this->Price;	
 }
  void getvalues()
  {
  	cout<<"\nBook name is:"<<Bname;
  	cout<<"\nBook id is:"<<id;
  	cout<<"\nBook author is:"<<Author;
  	cout<<"\nBook price is:"<<Price;
  	
  }
  
 	
 	
 	
 	
 };
 int main()
 {
 	book b1("Panipat",3,"VishwasPatil",350),b2("Musafir",20,"AchyutGodbole",500);
 	b1.display();
 	b2.display();
 	b1.setvalues();
 	b1.getvalues();
 	
 }
