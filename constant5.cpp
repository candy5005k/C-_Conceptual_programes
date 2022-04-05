 #include<iostream>

using namespace std;

class Demo
{
	 public:
	 int i;		//characteristics
 	 const int j;
  
 	Demo(int a,int b):j(b)
 	{
 	  i=a;
 	}	
 	
 	void fun()		//behaviour
	{
		cout<<"inside fun\n";
		i++;
		//j++;	//not allowed
	
	
	}
	// b is a constant input argument
	void gun(int a,const int b) const		//constant function/behaviour
	{
	
		int x;		//local variables
		//const int y;	//constant local variables
		cout<<"inside gun\n";
		//i++; //not allowed
		//j++;	//not allowed
		
		x++;	//allowed
		//y++; //not allowed
		
		a++;	//allowed
		//b++;	//not allowed
	}
};

int main()
{
 
 	Demo obj(11,21);
  	const Demo obj1(11,21);
 	 
 	 obj.fun();
 	 obj.gun(11,11);
 	 
 	 //obj1.fun();	//non constant function will not call when constant object created
 	 obj1.gun(11,11);	/// constant function will  call to constant object created
	return 0;
}
