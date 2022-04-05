#include<iostream>

using namespace std;

class Base
{
	public:
	int i,j;
	
	virtual void fun()		//Defination
	{
		cout<<"base fun\n";
	}
	
	virtual void fun(int no)		//Overload defination
	{
		cout<<"base fun 2\n";
	}
	void gun()		//Defination
	{
		cout<<"base gun\n";
	}
	virtual void run()		//Defination
	{
		cout<<"inside derived run\n";
	}

};

class Derived : public Base
{
	public:
	int x,y;
	
	virtual void fun()		//Redefination
	{
		cout<<"inside derived fun\n";
	}

	virtual void run()		//Defination
	{
		cout<<"inside derived run\n";
	}

};

int main()
{
   //Derived *p =new Base();	//downcasting
	Base *p = new Derived();	//upcasting 
	
	
	p->fun();
	p->fun(20);
	p->run();
	



	cout<<"size of Base:"<<sizeof(Base)<<"\n";

	cout<<"size of Derived:"<<sizeof(Derived)<<"\n";


	return 0;
}
