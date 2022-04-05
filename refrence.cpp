#include<iostream>

using namespace std;

int main()
{
	int no = 11;
	
	int &x = no;
	
	cout<<"size:"<<no<<"\n";
	cout<<"size refrence another name  :"<<x<<"\n";
	
	return 0;
}
