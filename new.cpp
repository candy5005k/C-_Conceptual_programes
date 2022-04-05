#include<iostream>
 
using namespace std;

int main()
{
	int Arr[10];
	
	
	int *p = NULL;
	
	//p = (int *)malloc(sizeof(int)*10);

	p = new int[10];
	
	if(p==NULL)
	{
		cout<<"unable to get memory\n";
		
	}	
	else
	{
		cout<<"memory getes allocated  :"<<p<<"\n";
	}
	
	//free(p);	
		
	delete []p;	//write as it is when we create array	
return 0;
}
