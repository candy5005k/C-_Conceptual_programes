#include<iostream>
 
using  namespace std;

class Demo					//Parent class
{
	public:
  	int i,j;		//instance variable  //non static
  	static int x;		//class variavle	//static
  	
  	Demo(int a = 10,int b = 20)
  	{
  	
  	 	cout<<"inside constructor\n";
  	 	this->i=a;
  	 	this->j=b;
  	
  	}
  	
  	void fun(int no)
  	{
  		cout<<"non static fun\n";
  		cout<<this->i<<"\n";
  		cout<<Demo::x<<"\n";
  		cout<<this->j<<"\n";
  	}
  	
  	static void gun(int value)
  	{
  		cout<<"inside satic gun\n";
  		//cout<<this->i<<"\n";//error
  			
  	}
   
};

 
int Demo :: x = 30;

int main()
{

	cout<<Demo::x<<"\n";
  	Demo::gun(11);
  
   
  
  
  	Demo obj(11);

  	obj.fun(20);	//fun(&obj,20)
  	
  	cout<<obj.i<<"\n";
  	
  	cout<<obj.j<<"\n";
   
  	
  	cout<<sizeof(obj)<<"\n";
  	
  	
	return 0;
}
