#include<iostream>

using namespace std;

class omkar
{
	public:
	int u = 0;
	int r = 0;

omkar(int h,int a)
{
	u = h;
	r = a;
	cout<<"inside para cons\n";
}
omkar(omkar &ref)
{
cout<<"inside copy cons\n";	
	u = ref.u;
	r = ref.r;

}
};
int main()
{
	
	omkar obj1(65,45);
	omkar obj2(obj1);

	cout<<obj1.u<<"\n";
	cout<<obj2.r<<"\n";
	return 0;
}
