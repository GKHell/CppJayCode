
#include<iostream>
using namespace std;

template <class data>

class Max{

	data d1,d2;

public:
	Max(data a,data b)
	{
		d1 = a;
		d2 = b;

		if(d1>d2)
		{
			cout<<"max is "<<d1<<endl;
		}
		else
		{
			cout<<"max is "<<d2<<endl;
		}
	}
};

int main()
{
	Max<int> m1(30,4);  // data(template) will replace by int
	Max<float> m2(3.4,3.1); // data(template) will replace by float
	Max<char> m3('m','j'); // data(template) will replace by char

}