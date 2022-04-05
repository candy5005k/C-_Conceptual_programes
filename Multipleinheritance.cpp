#include<iostream>
 
using  namespace std;

class Base1					//Parent class
{
	public:
  	int i,j;
  	
 	Base1()
 	{
 		cout<<"Base1 constructor\n";
 
 	}

	
 	~Base1()
 	{
 		cout<<"Base1 destructor\n";
 	}


};

class Base2
 {
	 public:
  	int a,b,c;
  	
 	Base2()
 	{
 		cout<<"Base2 constructor\n";
 
 	}

	
 	~Base2()
 	{
 		cout<<"Base2 destructor\n";
 	}

 
 

 };
 class Derived: public Base1,Base2
 {
	 public:
  	int a;
  	
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
	// Derived dobj;
	 
	 Base1 bobj;
 
	return 0;
}
