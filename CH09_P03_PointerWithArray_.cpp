#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"Enter number as size : ";
	cin>>n;

	int a[n];
	int *p = a; // *p = &a[0]

	cout<<"Enter the array : \n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter data : ";
		cin>>*(p+i);
		*(p+i) *= 10;
	}

	cout<<"\n--------------\n";
	for(i=0;i<n;i++)
	{
		cout<<" data : "<<*(p+i)<<endl;
	}
}