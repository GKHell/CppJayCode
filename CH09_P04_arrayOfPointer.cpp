

#include<iostream>
#include<string>
using namespace std;

class Code{

public:
	string name;

public:
	Code(string name)
	{
		this->name = name;
	}
};
int main()
{
	Code c1("Red"),c2("black");
	Code *a[10]; // array of pointe of class(object)

	a[0] = &c1;
	a[1] = &c2;

	for(int i=0;i<2;i++)
	{
		cout<<"data : "<<a[i]->name<<endl;
	}
}