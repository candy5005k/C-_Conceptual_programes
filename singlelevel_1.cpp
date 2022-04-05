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
 

int main()
{
	 Derived dobj;
 
	return 0;
}
