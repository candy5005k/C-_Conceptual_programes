#include<iostream>

using namespace std;

class Demo
{
	 public:
	 int i;
 
 	const int j;
 	
 	Demo():j(30)	//member initiallization
 	{
 	 i=11;
 	// j=54;
 	
 	}
 	
 	Demo(int a,int b):i(a),j(b)
 	{
 	   cout<<"inside parameterized\n";
 	}
};

int main()
{
 	Demo dobj;
 	dobj.i;
 	dobj.j;
 	cout<<"default constructor :"<<dobj.i<<"\n";
 	cout<<"default constructor :"<<dobj.j<<"\n";
 	
 	Demo obj(11,21);
 	obj.i;
 	obj.j;
 	cout<<"parameterized constructor : "<<obj.i<<"\n";
	cout<<"parameterized constructor : "<<obj.j<<"\n";
	
	obj.i++;
	cout<<"parameterized constructor : "<<obj.i<<"\n";
	//obj.j++;
	//cout<<obj.j<<"\n";
	
	Demo obj1(obj);
	
	return 0;
}
