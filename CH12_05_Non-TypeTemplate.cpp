
#include<string>
#include<fstream>
#include<iostream>
using namespace std;
template <class me,int rollno>
void insert(me a,me b,string name)
{
	ofstream file;
	file.open("./UnixCMDs/CH12_tmp_"+name+".txt");

	file<<"name : "<<name<<","<<rollno<<endl;
	file<<a<<" + "<<b<<" = "<<a+b<<endl;
	file<<a<<" * "<<b<<" = "<<a*b<<endl;
	file<<a<<" / "<<b<<" = "<<a/b<<endl;
	file<<a<<" - "<<b<<" = "<<a-b<<endl;
}
int main()
{
	insert<int ,30>(10,20,"GK");
}