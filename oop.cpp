#include<iostream>
using namespace std;

class Arithmatic

{	//class OPENING 
	public:
      //characteristics
	int iNo1=0;			 
	int iNo2=0;
	
     //behaviour	

Arithmatic() 				 //defualt constructor
{
	cout<<"inside the default constructor\n";
	iNo1 = 0;	
	iNo2 = 0;
}
Arithmatic(int A,int B)		//parameterized constructor
{
	cout<<"inside the parameterized constructor\n";
	iNo1 = A;	
	iNo2 = B;
}
~Arithmatic() 			//destructor
{
	cout<<"inside desctructor\n";
}


int Addition()
{
	int iAns = 0;
	iAns = iNo1 +iNo2;
	return iAns;
}

int Substraction()
{

	int iAns = 0;
	iAns = iNo1 -iNo2;
	return iAns;
}

 
};//class CLOSING 
int main()
{
	 int iValue1 = 0;
	 int iValue2 = 0;
	 int iRet = 0;

	cout<<"enter 1st the number\n";
	cin>>iValue1;
	
	cout<<"enter 2nd the number\n";
	cin>>iValue2;
	
	Arithmatic obj1;
	
	Arithmatic obj2(iValue1,iValue2);

	iRet = obj2.Addition();
	cout<<"Addition of:"<<iRet<<"\n";
	
	iRet = obj2.Substraction();
	cout<<"Substraction of:"<<iRet<<"\n";
	
	return 0;
	
}
