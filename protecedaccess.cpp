#include<iostream>
 
using  namespace std;

class Demo					//Parent class
{
	public:
  	int i;
  	
	private:
	int j;
	protected:
	
	int k; 
};

class Hello : public Demo
 {
 	public:
 	int l;
 
	private:
	int m;
	
	protected: 
 	int n;
 	
 	public:
 	
 	void fun()
 	{
 		cout<<k;
 	}

 };

int main()
{
	Demo obj1;
	
	obj1.i;
	
	
	Hello obj2;
	
	obj2.fun();
	//obj2.k;
	return 0;
}
