/**
 * Pointer arithmetic : + , -
 * 
 * NOTE : *, / , % not allowed.
 * 
 * */

#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20,c=30;

	int *p = &a;

	cout<<"addresses : \n"<<&a<<"\n"<<&b<<"\n"<<&c<<endl;
	
	// pointer arithmetic  -
	cout<<"A: data : "<<*p<<"\t addresse : "<<p<<endl;
	p--;
	cout<<"B: data : "<<*p<<"\t addresse : "<<p<<endl;
	p=p-1; //p--
	cout<<"C: data : "<<*p<<"\t addresse : "<<p<<endl;

	cout<<"\n-----------------------------------\n";
	
	// pointer arithmetic  +
	p+=2;
	cout<<"A: data : "<<*p<<"\t addresse : "<<p<<endl;


}