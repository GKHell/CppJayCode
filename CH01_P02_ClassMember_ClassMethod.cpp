
/**
 * class = variable[data Member] + function[method]
 * */

#include<iostream>
#include<string>
using namespace std;

/**
 * data member : private
 *      method : public
 * */
/**
 * Abstraction means displaying only essential information and hiding the details
 * 
 * */
class Result
{
	int rollno;
	string name;
	float marks;
	bool status;

public:
		void setData() // to get info from user
		{
			cout<<"Enter rollno : ";
			cin>>rollno;

			cout<<"Enter name : ";
			cin>>name;

			cout<<"Enter marks : ";
			cin>>marks;

			if(marks > 33)
				status = 1;//pass
			else
				status = 0;//fail
		}
		void getData()
		{
			cout<<"rollno : "<<rollno<<endl;
			cout<<"  name : "<<name<<endl;
			cout<<" marks : "<<marks<<endl;
			cout<<"status : "<<status<<endl;
			if(status)
				cout<<"pass....";
			else
				cout<<"fail....";

		}

};

int main()
{

	Result r; // object 'r'

	r.setData(); //method
	r.getData(); //method

	// cout<<"rollno : "<<r.rollno<<endl;
}