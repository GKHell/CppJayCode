

#include<iostream>
using namespace std;
int main()
{

	try{

		thrown 'A';
		// throw 10.3f;
		// throw 10;
	}
	catch(int a)
	{
		cout<<"integer error...\n";
	}
	catch(float a)
	{
		cout<<"float error...\n";
	}
	catch(...)
	{
		cout<<"default error...\n";
	}
}