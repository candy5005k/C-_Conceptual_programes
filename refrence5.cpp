#include<iostream>

using namespace std;

int main()
{
	int arr[4] ={10,20,30,40};
	
	int (&brr)[4]= arr; 	
	cout<<" value :"<<arr[0]<<"\n";
 
	cout<<" value :"<<brr[1]<<"\n";
 
	return 0;
}
