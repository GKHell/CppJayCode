/**
 * contructor : 
 * 			it will allocate the memory to the object & asign the values
 * -------------------------------
 * types of constructor
 * 	1. default 
 *  2. parameterized 
 *  3. copy
 * -------------------------------
 * Rules for constructor:
 * 	- same name as class name
 *  - must be public
 *  - called whenever object is created.
 *  - for each object constructor called only once.
 * -------------------------------------
 * */
#include<iostream>
using namespace std;
class A
{
	public:
		A()// default constructor
		{
			cout<<"m1\tdefault me..."<<this<<endl;
		}

			A(int x) // parameterized constructor
			{
				cout<<"m2\t"<<x<<"\tparameterized constructor : "<<this<<endl;
			}
			A(int x,int y) // parameterized constructor
			{
				cout<<"m3\t"<<x<<","<<y<<"\tparameterized constructor : "<<this<<endl;
			}

		A(A &obj) //copy constructor
		{
			cout<<"m4\tcopy constructor."<<endl;	
		}
};
int main()
{
	A a1; // m1
	A a2(23,34); // m3
	A a3(a2); // copy : m4
	A a4(30); // m2
}