#include<iostream>

using namespace std;

float Area(float fRadious,float PI =3.14) //default argument should be on left side of given value of fRadius
{
	float ans = 0.0;
	ans = PI*fRadious*fRadious;
	return ans;

}

int main()
{
	 
	float rat =0.0;
	 
	rat =Area(6.5,7.3);
	cout<<rat<<"\n";
	
	rat =Area(6.5);			//deafultargemnts will explicitly call in above function pi = 3.14
	cout<<rat<<"\n";
	
	 
	return 0;
}
