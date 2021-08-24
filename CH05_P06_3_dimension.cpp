/**
 *  nth : dimension
 *  n : loops
 *  n : loop indexes
 * // access element in innerest loop 
 */

#include<iostream>
using namespace std;
int main()
{
	int a[10][10][10];
	int n,m,o;
	int i,j,k;
	int counter = 0;
	cout<<"Enter value of n,m,o : ";
	cin>>n>>m>>o;

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<o;k++)
			{
				a[i][j][k] = ++counter;
				// cin>>a[i][j][k];
			}
		}
	}
	// display 3d matrix;;
	cout<<"\n----------------------\n";

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<o;k++)
			{
				cout<<"\t"<<a[i][j][k];
			}
			cout<<"\n";
		}
		cout<<"----------------------\n";
	}
}