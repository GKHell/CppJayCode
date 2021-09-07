/**
 * pointer is a variable which is used to store the address of another variable.
 * 
 * best benifit is speed..
 * 
 * */
#include<iostream>
using namespace std;
int main()
{
	int a=39,b=30;
	int *p=&a; // address -> p
	cout<<"Data "<<a<<"\t address : "<<&a<<endl;
	cout<<"Data "<<*p<<"\t address : "<<p<<endl;

	p = &b;
	cout<<"Data "<<b<<"\t address : "<<&b<<endl;
	cout<<"Data "<<*p<<"\t address : "<<p<<endl;

	cout<<"size of Int : "<<sizeof(int)<<endl;
}