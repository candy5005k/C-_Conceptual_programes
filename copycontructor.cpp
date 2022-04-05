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
	cout<<"inside copy constructor\n";
	x = ref.x;	
	y = ref.y;
	}
	~Demo()
	{
	cout<<"inside destructor\n";
	
	}



};

int main()
{
	 
	Demo obj1(60,32);
	 
	Demo obj2(100,54);
	 
	Demo obj3(obj1); 
	
		//printf("size of obj1: %d\n ",sizeof(obj1));
	
	cout<<"sizeof(obj1)"<<"\n";
	cout<<"sizeof(obj2)"<<"\n";
	
	cout<<"size of obj1 :"<<obj1.x<<"\n";
	cout<<"size of obj2 :"<<obj2.x<<"\n";
	cout<<"size of obj3   :"<<obj3.x<<"\n";
	cout<<"size of obj3   :"<<obj3.y<<"\n";
	
	obj1.x++;
	obj2.x++;
	obj3.x++;
	
	cout<<"size of obj1 :"<<obj1.x<<"\n";
		 
	cout<<"size of obj2 :"<<obj2.x<<"\n";

	cout<<"size of obj3  :"<<obj3.x<<"\n";
	return 0;
}
