

#include<iostream>
using namespace std;
template <typename T,class P> // we can use class instead of typename
void div1(T a,P b)
{
	cout<<a<<" / "<<b<<" = "<<a/b<<endl;
}
int main()
{
	div1(10.3,3); // for mismatch of data Type.
}