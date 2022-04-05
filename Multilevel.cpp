#include<iostream>
 
using  namespace std;

class Base					//Parent class
{
	public:
  	int i,j;
  	
 	Base()
 	{
 		cout<<"base constructor\n";
 
 	}

	
 	~Base()
 	{
 		cout<<"base destructor\n";
 	}


};

class Derived: public Base
 {
	 public:
  	int a,b,c;
  	
 	Derived()
 	{
 		cout<<"Derived constructor\n";
 
 	}

	
 	~Derived()
 	{
 		cout<<"Derived destructor\n";
 	}

 
 

 };
 class Derived1: public Derived	
 {
	 public:
  	int k,l;
  	
 	Derived1()
 	{
 		cout<<"Derived1 constructor\n";
 
 	}

	
 	~Derived1()
 	{
 		cout<<"Derived1 destructor\n";
 	}

 
 

 };

int main()
{
	 Derived1 dobj;
 
	return 0;
}
