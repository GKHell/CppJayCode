#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	string userName,pass;
	string u="gkHell",p="123";
	char ch;

	tryagain:
	cout<<"\nEnter username : ";
	cin>>userName;
	cout<<"Enter password : ";
	cin>>pass;

	if(userName==u && p==pass)
	{
		cout<<"Welcome ...";
		goto play;
	}
	cout<<"Invalid userName or password ..."<<endl;
	cout<<"\aDo you want forget password ?? [y/n]";
	cin>>ch;
	if(ch=='y')
		goto reset;
	else 
		goto  tryagain;

	play:
		cout<<"play code goes here....";
		exit(0);
	reset:
		string ps,old="567";
		cout<<"Enter your old pasword : ";
		cin>>ps;
		if(ps==old)
			{
				cout<<"Enter new Password : ";
				cin>>p;
				goto tryagain;
			}
		goto reset;
}
