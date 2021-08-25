
#include<iostream>
using namespace std;
class Student{
	int rollno;
public:
	Student()// default
	{
		rollno=30;
	}
	Student(int rollno) // parameterized
	{
		this->rollno = rollno;
	}
	Student(Student &obj) // copy
	{
		this->rollno = obj.rollno;
	}
	void getData()
	{
		cout<<this<<"\t rollno :"<<rollno<<endl;
	}
};

int main()
{
	Student jay;
	Student aakash(25);
	Student nilay(jay);

	jay.getData();
	aakash.getData();
	nilay.getData();
}