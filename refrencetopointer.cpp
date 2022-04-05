#include<iostream>

using namespace std;

int main()
{
	int no = 11;
 
	
	int *p =&no;
	
	int *(&f) = p; 	
	cout<<"pointer fetched value :"<<p<<"\n";
	cout<<*p<<"\n";
	cout<<*f<<"\n";
	
	return 0;
}
