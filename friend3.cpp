#include<iostream>

using namespace std;

class Hello
{
 public:
	void fun();
	void gun();
	
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
	friend void Hello::gun();
};

 void Hello::fun()
 {
	Base bobj;
	cout<<bobj.i<<"\n";
	cout<<bobj.k<<"\n";
	cout<<bobj.m<<"\n";
 }
 
  void Hello::gun()
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
	hobj.gun();	
 
	return 0;
}
