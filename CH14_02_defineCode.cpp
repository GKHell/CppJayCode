

#include"iostream"
using namespace std;

#define sum(x,y) x+y //macro as function
int main()
{
	#define A 100 //macro as weak constant

	#undef A
	#define A 300
	// A  =32;

	cout<<" A  : "<<A<<endl;
	cout<<"sum : "<<sum(20,4);
}