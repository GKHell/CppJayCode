
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	int max,min;
	cout<<"Enter 3 numbers : ";
	cin>>a>>b>>c;

	if(a>b && a>c)
	{
		max = a; 
		min = (b>c)?c:b;
	}
	else if(b>a && b>c)
	{
		max = b;
		min = (a>c)?c:a;
	}
	else
	{
		max = c;
		min = (a>b)?b:a;
	} 

	cout<<max<<" is max..\n";
	cout<<min<<" is min..\n";
}