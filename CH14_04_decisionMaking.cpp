

#include<iostream>
using namespace std;
int main()
{
	#define A 100
	#define B 300

	#if A > B 
		cout<<A<<"is MAX #1";
	#elif A==B  
		cout<<"Both are same #3";
	#else 
		cout<<B<<"is MAX #2";
	#endif
}