#include<iostream>

using namespace std;

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

	friend void fun();
};

void fun()
{
	Base bobj;
	cout<<bobj.i<<"\n";
	cout<<bobj.k<<"\n";
	cout<<bobj.m<<"\n";
}
int main()
{

	fun();
	//	Base bobj;
 
	return 0;
}
