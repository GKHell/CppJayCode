
#include<iostream>
#include<string>
using namespace std;

class Student{

	public: 
		int rollno;
		string name;

};

int main()
{
	int a;
	Student s; // 's' is our object

	cout<<"Enter rollno : ";
	cin>>s.rollno;

	cout<<"Enter name : ";
	cin>>s.name;
	 
	 
	 
	cout<<"rollno : "<<s.rollno<<"\t name : "<<s.name<<endl;
	 

}