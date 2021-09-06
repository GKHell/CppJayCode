
#include <iostream>
using namespace std;
struct Student{
	int rollno;
	char div;
};
int main()
{
	struct Student s;

	s.rollno = 59;
	s.div= 'A';

	cout<<"rollno : "<<s.rollno<<"\t Div : "<<s.div;
}