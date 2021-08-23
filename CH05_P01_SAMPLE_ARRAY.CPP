#include<iostream>
using namespace std;
int main()
{
	int a1[]={10,20,30,40,50};
	cout<<"your data "<<a1[3]<<endl;
int i;
	for(i=0;i<5;i++)
	{
		cout<<"\na1["<<i<<"]="<<a1[i];
	}
	cout<<"\n---------------------------\n";
	
	int a2[100];
	int n;
		cout<<"Enter the size :";
		cin>>n;
		cout<<"Enter the array...."<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"a2["<<i<<"]=";
		cin>>a2[i];
	if(a2[i]<0)
	{
		a2[i]=a2[i]*-1;
	}
	
		
	}
	for(i=0;i<n;i++)
	{
		cout<<"\n		a2["<<i<<"]="<<a2[i];
	}
	
}
