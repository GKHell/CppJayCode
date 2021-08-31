
/**
 * 
 * 	function with return value ,without args..
 *  
 * */
#include<iostream>
using namespace std;

int sum()
{
	int a,b;
		cout<<"Enter 2 numbers  : ";
		cin>>a>>b; 
		return a+b;
}
int main()
{
	int ans;
	ans = sum();
	cout <<"ans : "<<ans<<endl;
	
	ans = sum();
	cout <<"ans : "<<ans<<endl;
	
}