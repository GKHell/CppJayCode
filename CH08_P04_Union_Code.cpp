
#include <iostream>
using namespace std;
union Student{
	int rollno; // size : 4 byte
	char div; // 1 byte
};
int main()
{
	union Student s;

	s.rollno = 59;
	s.div= 'C';
	s.rollno = 65.7; //efects on div
	cout<<"rollno : "<<s.rollno<<"\t Div : "<<s.div;
}