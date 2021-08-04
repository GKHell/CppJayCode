
#include<iostream>
using namespace std;
/**
 * A -> B
 * */

class A{
	public:
		void show()
		{
			cout<<"Hello I'm  A"<<endl;
		}
};

class B : public A{

		public:
		void show()
		{
			cout<<"Hello I'm  B"<<endl;
		}
			 
};
int main()
{
	B b;
	b.show(); // B class
	b.A::show(); // A class
}