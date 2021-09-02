
#include<iostream>
using namespace std;
void display(int i=1)
{
	if(i>10)
		return;
	cout<<"\n\u2714 incoming :"<<i;
	display(i+1);
	cout<<"\n\t \u2717 outgoing "<<i;
}
int main()
{
	display();
}