
#include<iostream>
using namespace std;
class A{
	public:
		A(){	cout<<"\t\tClass A\t"<<this<<endl;	}
};
class B: virtual public A{
	public:
		B(){	cout<<"\tClass B\t"<<this<<endl;	}
};
class C: virtual public A{
	public:
		C(){	cout<<"\tClass C\t"<<this<<endl;	}
};
class D: public B,public C{
	public:
		D(){	cout<<"Class D\t"<<this<<endl;	}
};
int main()
{
	D d;
}