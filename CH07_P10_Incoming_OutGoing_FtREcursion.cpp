
#include<iostream>
using namespace std;
void display(int i=1)
{
	if(i>10)
		return;
	cout<<"\nincoming :"<<i;
	display(i+1);
	cout<<"\n\t outgoing "<<i;
}
int main()
{
	display();
}