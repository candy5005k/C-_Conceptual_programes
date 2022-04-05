#include<iostream>

using namespace std;

int main()
{
	int no = 11;
	int &x = no;
	int &y = no;
	
	int &o = x;
	
	int *p =&x;	
	
	cout<<"entered no :"<<no<<"\n";
	cout<<"entered x :"<<x<<"\n";
	cout<<"entered y :"<<y<<"\n";
	cout<<"entered o refrence to refrence  :"<<o<<"\n";
	cout<<"pointer fetched value :"<<p*<<"\n";
	
	return 0;
}
