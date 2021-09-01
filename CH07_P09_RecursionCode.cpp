/**
 * 
 * recursion : 
 * 	function call itself..
 * 
 * */
#include<iostream>
using namespace std;
int i=0;
void display(int n,int i=1)
{
	if(i>10)
		return;
	cout<<n<<" x "<<i<<" = "<<i*n<<endl;
	display(n,i+1);
}
int main()
{
	cout<<"Hello world "<<++i<<endl;

	if(0) // base case : which one used to terminate the iteration
		main();
	cout<<"\n--------EXIT----------------\n\n";
	display(5);
}