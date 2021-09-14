

#include<iostream>
using namespace std;
int main()
{
	#define A 10

	#undef A
	#ifdef A 			// return true if A is define
		cout<<"Hello coder";
	#else
		cout<<"bye coder,,,";
	#endif
		
		cout<<"\n----------------------------------\n\n";

	#undef A
	#ifndef A   // return true if A if not define.
		cout<<"marvel";
	#else
		cout<<"DC";
	#endif

}