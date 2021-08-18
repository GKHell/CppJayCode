#include<iostream>
using namespace std;
int main()
{	
	float counter=0;

	for(int i=1;i<=6;i++) //rows
	{

		for(int j=1;j<=6;j++)//columns
		{
			cout<<"   ("<<i<<","<<j<<") ";
			if(i==j)
			{
				counter++;
			}
		}
	cout<<"\n";
	}

	cout<<"ans : "<<counter/36<<endl;
}
