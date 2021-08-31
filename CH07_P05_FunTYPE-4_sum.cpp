
/**
 * 
 * 	function with return value ,with args..
 *  
 * */
#include<iostream>
using namespace std;

int sum(int a,int b)
{
	return a+b;
}
int main()
{
	int x,y,z;
		cout<<"Enter 2 numbers  : ";
		cin>>x>>y;

	z = sum(x,y);
	cout<<x<<" + "<<y<<" = "<<z<<endl;

}