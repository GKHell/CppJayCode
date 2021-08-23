#include<iostream>
#include<string>
using namespace std;
int main()
{
	string words[100];
	int n,i,index;
	bool f=0;
	cout<<"Enter the size of words :";
	cin>>n;
	cout<<"Enter those words :\n";
	for(i=0;i<n;i++)
	{
		cout<<"words["<<i<<"]=";
		cin>>words[i];
		
	}
	cout<<"\n----------------------------\n";
	cout<<"Enter data to search :";
	string data;
	cin>>data;
	cout<<"Data :\n";
	for(i=0;i<n;i++)
	{
		cout<<"words["<<i<<"]="<<words[i]<<endl;
		if(words[i]==data)
		{
			index=i;
		f=1;
		break;
		}
	}	
	if(f)
	{
		cout<<"\n\nData found at "<<index;
		
		
	}
	else
	{
		cout<<"\n\nsorry.... data not found";
	}
}
