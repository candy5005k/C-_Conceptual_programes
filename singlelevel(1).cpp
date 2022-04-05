#include<iostream>
 
using  namespace std;

class Base					//Parent class
{
	public:
  	int i,j;
  	
 	Base()
 	{
 		couyt<<"base constructor\n";
 
 	}

	
 	~Base()
 	{
 		couyt<<"base destructor\n";
 	}


};

class Derived: public Base
 {
	 public:
  	int a,b,c;
  	
 	Derived()
 	{
 		couyt<<"Derived constructor\n";
 
 	}

	
 	~Derived()
 	{
 		couyt<<"Derived destructor\n";
 	}

 

 };
 

int main()
{
	 Derived dobj;
 
	return 0;
}
