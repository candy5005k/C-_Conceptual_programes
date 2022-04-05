#include<iostream>

using namespace std;

class Hello
{
 public:
	void fun();
};
class Base
{
	public:
	int i;
	
	
	private:
	int k;
	
	protected:
	int m;
	
	public:
	Base()
	{
	i=10;
	k=20;
	m=30;	
	
	}

	friend void Hello::fun();
};

 void Hello::fun()
 {
	Base bobj;
	cout<<bobj.i<<"\n";
	cout<<bobj.k<<"\n";
	cout<<bobj.m<<"\n";
 }
 
int main()
{
 	Hello hobj;
 	hobj.fun();

 
	return 0;
}
