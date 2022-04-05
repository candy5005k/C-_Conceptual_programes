 #include<iostream>
#include<stdio.h>
using  namespace std;

class Demo
{
	public:
	int x;
	int y; 
	
 
	Demo(int j =10,int k = 20)		//parameterized constructor";
	{
	 	x = j;
	 	y =k;
	 	cout<<x<<"\n";
	 }


	void fun( int no)
	{
	
		cout<<"inside fun\n";
	}


};

int main()
{
	Demo obj;
	
	Demo obj2(25,35); 
	
	obj.fun(52);	//fun(&obj,51)
 
	 	
	 
	return 0;
}
