#include<iostream>

using namespace std;

class big
{
	public :
	int n1;
	int n2;
	   	  
	void input();
	void display();
};

void big ::input()
{
	 
		cout<<"enter the 1st number\n";
		cin>>n1;
		
		cout<<"enter the 2nd number\n";
		cin>>n2;
}

void big ::display()
{
	if(n1>n2)
	{
		cout<<"the 1st number "<<n1<<" is greater number\n";
	}
	else
	{
	
		cout<<"the 2nd number "<<n2<<" is greater number\n";
	}
}

int main()
{
	big obj;
	
	obj.input();
	obj.display();

	return 0;
}
