
#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
	float r,h,ans;

	cout<<"Enter the radius & height : ";
	cin>>r>>h;

	ans = PI*r*r*h;

	cout<<"ans : "<<ans<<endl;
}