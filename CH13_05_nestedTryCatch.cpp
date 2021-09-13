
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name,pass;

	cout<<"Enter name : ";
	cin>>name;

	try{

		if(name!="gk")
			throw 10;
		cout<<"Enter pass ; ";
		cin>>pass;

				try{
					if(pass!="1234")
						throw 23;

					cout<<"welcome...";
				}
				catch(int passMe)
				{
					cout<<"invalid passMe "<<passMe<<endl;

				}
	}
	catch(int userMe)
	{
			cout<<"invalid userMe "<<userMe<<endl;
	}
}