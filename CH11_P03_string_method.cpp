
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class StringMethods{

	string str1,str2;

public:
	StringMethods(string str1,string str2)
	{
		this->str1 = str1;
		this->str2 = str2;
	}
	void partition()
	{
		cout<<"\n-----------------------------\n\n";
	}
	void run()
	{
			cout<<"str1 : "<<str1<<"\t str2 : "<<str2<<endl;
	partition();
			str2 = "_"+str2;
			str1.append(str2); // str1 = str1+str2
			cout<<"str 1: "<<str1<<endl;
	partition();
			int l = str1.capacity();	
			cout<<"capacity  : "<<l<<endl;
	partition();
			str1 = "0123456789";
			str1.erase(2,4);
			/**
			 * string.erase(staringIndex,endingIndex)
			 * */
			cout<<"erase : "<<str1<<endl;
	partition();
			str1.assign(5,'*'); // string.assign(size,character);
			cout<<"assign : "<<str1<<endl;
	partition();
			str1 = "2";
			str2 = "2";
			int f = str1.compare(str2); // int = string1.compare(string2);
			cout<<"compare : "<<f<<endl;
	partition();
			str1 = "hello jay";
			int p = str1.find("jayd"); // intIndex  = string.find(sub_string);
			cout<<"find : "<<p<<endl;
	partition();
			char ch = str1.at(1); // char = string.at(index);
			cout<<"character : "<<ch<<endl;
	partition();
			str1 = "";
			f = str1.empty(); // bool/int = string.empty(); 
			cout<<"empty : "<<f<<endl;
	partition();
			l = str1.length();
			cout<<"length : "<<l<<endl;
	partition();
			str1 = "Hello me";
			cout<<"begin : "<<*str1.begin()<<endl;
			cout<<"  end : "<<*str1.end()<<endl;
			cout<<"null : "<<(bool)NULL<<"\t : null : \0"<<endl;

	partition();
			str1 = "Jay";
			str2 = "Akash";

			cout<<"str1 : "<<str1<<"\t str2 : "<<str2<<endl;
			str1.swap(str2);
			cout<<"str1 : "<<str1<<"\t str2 : "<<str2<<endl;
			

	}
};

int main()
{
	StringMethods s("hello","Bye");
	s.run();
}