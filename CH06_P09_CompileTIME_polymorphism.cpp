/**
 * Polymorphism : 
 * 	one thing with muliple form.
 * 	**variants of Loki**
 *	- For compile Time polymorphism we dont need a class.
 *  - dif prototype
 * */
#include<iostream>
#include<string>
using namespace std;

string fullName(string fn,string ln)
{
	return fn+"."+ln;
}
string fullName(string fn,string mn,string ln)
{
	return fn+"."+mn+" "+ln;
}
int main()
{
	string name = fullName("Gk","Hell");
	cout<<"name : "<<name;
			cout<<"\n--------------------\n";
	name = fullName("Gk","Code","Hell");
	cout<<"name : "<<name;
}