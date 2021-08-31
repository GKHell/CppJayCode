// with solution of diamond problem ...
#include<iostream>
using namespace std;
class A{
	public:
		A(){	cout<<"\tClass A\t"<<this<<endl;	}	
};
class B: virtual public A{
	public:
		B(){	cout<<"\t\tClass B\t"<<this<<endl;	}
};
class D: virtual public B{
	public:
		D(){	cout<<"Class D\t"<<this<<endl;	}
};
class C: virtual public B{
	public:
		C(){	cout<<"Class C\t"<<this<<endl;	}
};
class E: public D{
	public:
		E(){	cout<<"Class E\t"<<this<<endl;	}
};
class F: virtual public C{
	public:
		F(){	cout<<"Class F\t"<<this<<endl;	}
};
class G: virtual public C{
	public:
		G(){	cout<<"Class G\t"<<this<<endl;	}
};
class H: public E,public F,public G{
	public:
		H(){	cout<<"Class H\t"<<this<<endl;	}
};

int main()
{
	H h;
}