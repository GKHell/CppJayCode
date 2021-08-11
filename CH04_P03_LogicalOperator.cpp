

#include<iostream>
using namespace std;
int main()
{

	 
	 if(0 && 1)
	 {
	 	cout<<"AND : Hello there 1...."<<endl;
	 } 
	 else
	 {
	 	cout<<"AND : Hello there 2...."<<endl;
	 }

	 cout<<" ---------------------\n";

	 if(0 || 1)
	 {
	 	cout<<"OR : Hello there 1...."<<endl;
	 } 
	 else
	 {
	 	cout<<"OR : Hello there 2...."<<endl;
	 }

	 cout<<" ---------------------\n";
	 if(!( (!!1) && 10) )
	 {
	 	cout<<"NOT : TRue"<<endl;
	 }
	 else
	 {
	 	cout<<"NOT : False"<<endl;
	 }
}