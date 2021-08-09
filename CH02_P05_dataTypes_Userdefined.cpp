
#include<iostream>
using namespace std;

struct Student{
	int x;
};

union Me{
	int x;
};

class Code{
public:
		int x;
};
enum day{mon,tue=20,wed,thu=0,fri,sat,sun};
int main()
{
	struct Student s;
	union Me m;
	     Code c;

	 s.x = 10;
	 m.x = 20;
	 c.x = 30;

	 cout<<"student : "<<s.x<<endl;//10
	 cout<<"    Me  : "<<m.x<<endl;//20
	 cout<<"   code : "<<c.x<<endl;//30
	 cout<<"    day : "<<wed<<endl;// 21
}