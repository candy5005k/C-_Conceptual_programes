#include<iostream>
 
using namespace std;

class Demo
{
	public:
	int x = 0;
	int y = 0;
	
    Demo()
    {
    	cout<<"inside default cons\n";
  	
    }


    ~Demo()
    {
    	cout<<"inside destructor\n";
  	
    }

    void fun()
  {
  	cout<<"inside fun\n";
  
  }	
};
int main()
{
 
	Demo obj1;		//static object creation//auto storage class
	
	 
	obj1.fun();		//addresing by direct access  
	 
	
	Demo *ptr =NULL;
	ptr = new Demo;	//dynamic object creation using pointer
	
	 
	ptr->fun();		//addresing by indirect access
	
	
	delete ptr;
	
return 0;
}
