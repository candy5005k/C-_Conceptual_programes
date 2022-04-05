#include<iostream>

using namespace std;

class Demo
{
	
	public:
	int add(int no1, int no2)
	{
 
	  return no1+no2;
	
	}

	virtual int sub(int no1, int no2)=0;
};

class Hello :public Demo
{
	  
	public:
	 int sub(int no1, int no2)
	 {
	  
	   return no1-no2;
 
	 }
};

int main()
{
	int Ret;
	Demo *p = new Hello;
	
	Ret=p->add(11,10);
	
	cout<<"Addition :"<<Ret<<"\n";
	
	Ret=p->sub(11,10);

	
	cout<<"Substraction :"<<Ret<<"\n";
	
	
	return 0;
}
