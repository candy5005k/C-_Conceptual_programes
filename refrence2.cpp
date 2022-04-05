#include<iostream>

using namespace std;

int main()
{
	int no = 11;
	int &x = no;
	int &y = no;
	
	cout<<"entered no :"<<no<<"\n";
	cout<<"entered x :"<<x<<"\n";
	cout<<"entered y :"<<y<<"\n";
	return 0;
}
