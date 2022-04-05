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
 	
 	Demo(int a,int b):j(b)
 	{
 	  i=a;
 	}
};

int main()
{
 
 	Demo obj(11,21);
 	obj.i;
 	obj.j;
 	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	
	return 0;
}
