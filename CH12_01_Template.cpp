

#include<iostream>
using namespace std;
template <typename T> // we can use class instead of typename
void sum(T a,T b)
{
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
}
int main()
{
	sum(10,30);
}