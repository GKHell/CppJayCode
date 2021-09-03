
#include<iostream>
using namespace std;
int main()
{
	int a;

	cout<<"Enter the number  : ";
	cin>>a;

	if(a<0)
		 a = a*-1;

	cout<<"number : "<<a;
}