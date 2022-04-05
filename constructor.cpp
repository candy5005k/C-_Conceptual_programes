#include<iostream>
#include<stdio.h>
using  namespace std;

class Demo
{
	public:
	int x;
	int y; 
	
	Demo()			//default constructor
	{
		cout<<"inside Default constructor\n";
		x = 0;
		y = 0;
	}	
	Demo(int j ,int k)		//parameterized constructor";
	{
	cout<<"inside parameterized constructor\n";
		x = j;
		y = k;
	
	}
	Demo(Demo  &ref)	//copy constructor
	{
	
	
	}
	~Demo()
	{
	cout<<"inside destructor\n";
	
	}



};

int main()
{
	 
	Demo obj1(21,32);
	 
	Demo obj2(21,54);
	 
	 //printf("size of obj1: %d\n ",sizeof(obj1));
	
	cout<<"sizeof(obj1)"<<"\n";
	cout<<"sizeof(obj2)"<<"\n";
	
	cout<<"size of obj1 :"<<obj1.x<<"\n";
	cout<<"size of obj2 :"<<obj2.x<<"\n";
	
	obj1.x++;
	obj2.x++;
	cout<<"size of obj1 :"<<obj1.x<<"\n";
		 
	cout<<"size of obj2 :"<<obj2.x<<"\n";


	return 0;
}
