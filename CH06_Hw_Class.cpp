#include<iostream>
using namespace std;
class Student{

		string name;
		int rollno;
	public:
			void getdata()
			{
				cout<<"Name :"<<name<<endl;
				cout<<"rollno :"<<rollno;
			}
			void setdata()
			{
				cout<<"Enter name :";
				cin>>name;
				cout<<"Enter rollno :";
				cin>>rollno;
			}

};
int main()
{
	Student A;
	A.setdata();
	A.getdata();

}