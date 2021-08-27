#include<iostream>
using namespace std;

class Student{

	string name;
	public:
		Student(string name)
		{
			this->name = name;
		}
		void wish()
		{
			cout<<"welcome "<<name<<endl;
		}
};
int main()
{
	Student s1("Jay"),s2("Aakash");
	s1.wish();
	s2.wish();
}