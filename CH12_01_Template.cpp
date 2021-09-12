

#include<iostream>
using namespace std;
template <typedef T>
void sum(T a,T b)
{
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}
int main()
{
	sum(10,30);
}