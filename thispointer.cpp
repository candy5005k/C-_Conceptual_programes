 #include<iostream>
 
using  namespace std;

class Demo
{
//characteristics
	public:
	int x;
	int y; 
	
//behaviours
	Demo(int j =10,int k = 20)		//parameterized constructor";
	{
	 	x = j;
	 	y =k;
	 	cout<<"the value of x in paramaeterized constructor:"<<x<<"\n";
	 
	 }



};

int main()
{
	Demo obj1;
	

 	obj1.x;
 	obj1.y;
 	
 	cout<<"the object 1 x value:"<<obj1.x<<"\n";
 	cout<<"the object 1 y value:"<<obj1.y<<"\n";
 	
 /*	Demo obj2(25,35); 
 
 	obj2.x;
 	obj2.y;
 	
 	cout<<"the object 1 x value:"<<obj2.x<<"\n";
 	cout<<"the object 1 y value:"<<obj2.y<<"\n";
 */
	 
	return 0;
}
