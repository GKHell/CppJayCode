
#include<iostream>
using namespace std;
template <class data>
void square(data m)
{
	cout<<m<<" square : "<<m*m<<endl;
}

template<>
void square<string>(string s)
{
	cout<<s<<" :  "<<s+s<<endl;
}
int main()
{

	square<int>(3);
	square<float>(3);
	square<string>("Code");
}