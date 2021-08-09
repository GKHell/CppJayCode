
#include<iostream>
using namespace std;

void say() // function
{
	cout<<"Hello There\n";
}

int main()
{
	int a[50] = {10,20,30,40,50,60,70,80,90,100}; //array

	cout<<"data : "<<a[4]<<endl;	
	for(int i=0;i<10;i++)
	{
		cout<<" a[ "<<i<<" ] = "<<a[i]<<endl;
	}
	say();
	say();
	/////////////////////////////////
	int x='A';
	int *p;

	p = &x;
	cout<<"address of x : "<<&x<<" data in x : "<<x<<endl;
	cout<<"address of x(p) : "<<p<<" data in x(p) : "<<*p<<endl;

}