#include<iostream>

using namespacestd;

class Demo
{
	public:
	int i.j;


	void gun()		//definatikon
	{
		cout<<"inside gun\n";
	}

	void fun()		//definatikon
	{
		cout<<"inside fun\n";
	}
	
	 

};

class Hello : public Demo
{
	public:
	int x,y;
	
	void sun()		//definatikon
	{
		cout<<"inside fun\n";
	}
	void gun(int n)		//redefinatikon
	{
		cout<<"inside gun\n";
	}
	


}


int main()
{
	

	return 0;
}
