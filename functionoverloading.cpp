#include<iostream>

using namespace std;

class Demo
{
	public:
	//1000
	int Addition(int No1,int No2)	//Addition@2ii
	{
		int ans = 0;
		ans = No1 + No2;
		return ans;
	}
	
	//2000
	float Addition(float No1,int No2, int No3)	//Addition@3iii
	{
		float ans = 0;
		ans = No1 +No2 + No3;
		return ans;
	}
	
	//3000
	int Addition(int No1,int No2,int No3,int No4)	//Addition@4iiii
	{
		int ans = 0;
		ans = No1 +No2 +No3 +No4;
		return ans;
	}




};
int main()
{

	Demo obj;
	
	float ret =0;
	
	//PUSH 10
	//PUSH 11
	
	//CALL 1000
	ret = obj.Addition(10,11);	//Addition@2ii(10,11)
	cout<<ret<<":passing 2 paramters addition\n";
	
	//PUSH 10
	//PUSH 11
	//PUSH 21
	
	//CALL 2000
	ret = obj.Addition(56.54,11,21);	////Addition@3iii(10,11,21)
	cout<<ret<<":passing 3 paramters addition\n";
	
	//PUSH 10
	//PUSH 11
	//PUSH 23
	//PUSH 54
	
	//CALL 3000
	ret = obj.Addition(10,11,23,54);	//Addition@4iiii(10,11,23,54)
	cout<<ret<<":passing 4 paramters addition\n";


	return 0;
}
