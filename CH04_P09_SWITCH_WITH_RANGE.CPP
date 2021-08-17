#include<iostream>
using namespace std;
int main()
{
	char jay;
	cout<<"Enter the character :";
	cin>>jay;

	switch(jay)
	{
		case 'A' ... 'Z':cout<<"upper case";break;
		case 'a' ... 'z':cout<<"lower case";break;
		case '0' ... '9':cout<<"numbers";break;
		default:cout<<"special symbol";
	}
}