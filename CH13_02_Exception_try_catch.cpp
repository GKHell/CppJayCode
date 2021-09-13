
#include<iostream>
using namespace std;

int main()
{
	float c,a,b;

	cout<<"Enter the numbers : ";
	cin>>a>>b;

	try{

		if(b==0)
			throw 10;
		c = a/b;
	}
	catch(int x)
	{
		c = 0;
		cout<<"Error ....\n";
	}

	cout<<"answer : "<<c<<endl;
}