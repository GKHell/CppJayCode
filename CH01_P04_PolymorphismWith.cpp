
#include<iostream>
using namespace std;
// compile time polymorphism
void sum(int a,int b)
{
	cout<<"f1 \t"<<a<<" + "<<b<<" = "<<a+b<<endl;
}
void sum(int a,int b,int c)
{
	cout<<"f2 \t"<<a<<" + "<<b<<" + "<<c<<" = "<<a+b+c<<endl;
}

int main()
{
	int a,b;
	cout<<"Enter 2 numbers : ";
	cin>>a>>b;

	sum(31,a);
	sum(1,b-10,b);
}