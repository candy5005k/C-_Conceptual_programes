//accept number and perform addition and substraction
#include<stdio.h>

int Addition(int no1,int no2)
{
	auto int Ans = 0;
	
	Ans = no1+no2;

	return Ans;
}


int Substraction(int no1,int no2)
{
	auto int Ans = 0;
	
	Ans = no1-no2;

	return Ans;
}
int main()
{
	auto int iA=0,iB=0,Ret=0;
	
	printf("enter the number 1st:\n");
	scanf("%d",&iA);
	
	printf("enter the number 2st\n");
	scanf("%d",&iB);
	
	Ret= Addition(iA,iB);
	printf("the Addition :%d\n",Ret);


 	Ret= Substraction(iA,iB);
	printf("the Substraction :%d\n",Ret);
 
	return 0;
}
