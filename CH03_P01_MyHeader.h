#include<string>
using namespace std;
class Student{

	int rollno;
	string name;

public:
		void setData()
		{
			cout<<"Enter rollno : ";
			cin>>rollno;

			cout<<"Enter name : ";
			cin>>name;
		}

		void getData()
		{
			cout<<" rollno : "<<rollno<<"\t name : "<<name<<endl;
		}
};