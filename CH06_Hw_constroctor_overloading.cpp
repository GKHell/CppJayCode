#include<iostream>
using namespace std;
class Student{
			int age;
	public:
			Student()
			{
				age=10;
			}
			Student(int age)
			{
				this->age = age;
			}
			Student(Student &obj)
			{
				this->age = obj.age;
			}
			void getdata()
			{
				cout<<"this"<<"\t age :"<<age<<endl;
			}
};
int main()
{
			Student Jay;
			Student Rahul(8);
			Student Dev(Jay);

			Jay.getdata();
			Rahul.getdata();
			Dev.getdata();
}