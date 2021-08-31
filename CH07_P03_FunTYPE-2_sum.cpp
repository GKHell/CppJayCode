
/**
 * 
 * 	function without return value ,with args..
 *  
 * */
#include<iostream>
using namespace std;

void sum(int a,int b=0)
{
	
		cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}
int main()
{
	int x,y;
		cout<<"Enter 2 numbers  : ";
		cin>>x>>y;
	sum(x,y); //where b = y
	sum(x,8); // where b = 8
	sum(x); //where b = 0
}