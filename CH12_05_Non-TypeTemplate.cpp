
#include<string>
#include<fstream>
#include<iostream>
using namespace std;
template <class me>
void insert(me a,me b,string name)
{
	ofstream file;
	file.open("./UnixCMDs/CH12_tmp_"+name+".txt");

	file<<a<<" + "<<b<<" = "<<a+b<<endl;
	file<<a<<" * "<<b<<" = "<<a*b<<endl;
	file<<a<<" / "<<b<<" = "<<a/b<<endl;
	file<<a<<" - "<<b<<" = "<<a-b<<endl;
}
int main()
{
	insert(10,20,"jay");
}