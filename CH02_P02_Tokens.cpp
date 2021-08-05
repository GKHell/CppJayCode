
#include<iostream>
using namespace std;
int sum(int x,int y)
{
	return x+6+y;
}
int main()
{
	int a=10; //variable 'we can change the value'
	a = 30;
 	cout<<"Hello World..."<<a<<endl;
 	cout<<"data : "<<sum(20,4)<<endl;

 	#define A 300
 	// A = 23;
 	#undef A 
 		#define A 40
 	cout<<"data : "<<A<<endl;
 	
 	cout<<"-------------------\n";

 	const int n =12;
 	// n = 12;
 	cout<<"DATA : "<<n<<endl;

}