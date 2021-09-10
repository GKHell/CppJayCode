
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name = "Jay";
	string *p = &name;
	string **q = &p;
	string ***r = &q;
	cout<<"data(name) : "<<&name<<"\t address : "<<&name<<endl;
	cout<<"   data(p) : "<<p<<"\t address : "<<&p<<endl;
	cout<<"   data(q) : "<<q<<"\t address : "<<&q<<endl;

	cout<<"\n------------------------\n\n";

	cout<<"with q : "<<**q<<endl;
	cout<<"with r : "<<**r<<endl;
	cout<<"with r : "<<***r<<endl;


}