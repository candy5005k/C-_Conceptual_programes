#include<iostream>
 
using  namespace std;

class Navnath						//Parent class
{
	 public:
	 int x,y;
	 
	 Navnath()
	 {
	 	cout<<"Inside Navnath Constructor\n";
	 
	 }
	 
	 ~Navnath()
	 {
	 	cout<<"Inside Navnath destructor\n";
	 
	 }
	 
	 
	 void fun()
	 {
	 	cout<<"Inside fun\n";
	 
	 }
	 
	 
};

class Omkar : public Navnath
{
	public:
	int i,j;
	
	Omkar()
	{
	 	cout<<"Inside Omkar Constructor\n";
	
	}
	 ~Omkar()
	 {
	 	cout<<"Inside Omkar destructor\n";
	 
	 }
	 
	 
	 void gun()
	 {
	 	cout<<"Inside gun\n";
	 
	 }
	 


};

class Om: public Omkar
{
	public:
	int k,l;
	
	Om()
	{
	 	cout<<"Inside Om Constructor\n";
	
	}
	 ~Om()
	 {
	 	cout<<"Inside Om destructor\n";
	 
	 }
	 
	 
	 void sun()
	 {
	 	cout<<"Inside sun\n";
	 
	 }
	 


};



int main()
{
	Om obj; 
	
	obj.sun();
	 
	Omkar obj2;
	
	obj2.gun();
	
	Navnath obj3;
	
	obj3.fun(); 
	
	return 0;
}
