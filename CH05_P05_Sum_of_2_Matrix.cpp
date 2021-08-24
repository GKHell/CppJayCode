/**
 *  c[i][j] = a[i][j] + b[i][j]
 * n => row,m => colums
 * i => row index , j = column index
 * */

#include<iostream>
using namespace std; 
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n,m;
	int i,j;
	cout<<"Enter rows & columns : ";
	cin>>n>>m;

	//---------- for matrix A
	cout<<"Enter matrix A : \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	//---------- for matrix B
	cout<<"Enter matrix B : \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>b[i][j];
		}
	}
	// for getting sum
	cout<<"\n-----------------\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
}