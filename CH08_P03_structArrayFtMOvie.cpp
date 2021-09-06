
// structure : {members..}
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int n,i;
struct Movie{

		char name[100];
		double ticket_price;
		char category[3][100];
		char date[100];

		struct leadCast{
			char hero[100];
			char heroine[100];
			char villain[100];
		}cast;

};


void setInfo(struct Movie m[])
{
	for(i=0;i<n;i++)
	{
		cout<<"\n\n Enter Information of Movie : "<<i+1<<endl;
		cout<<"Enter name : ";
		cin>>m[i].name;
		cout<<"Enter ticket_price : ";
		cin>>m[i].ticket_price;
		cout<<"Enter date[yyyy/mm/dd] : ";
		cin>>m[i].date;
		cout<<"Enter category : ";
		for(int j=0;j<3;j++)
			cin>>m[i].category[j];
		cout<<"Enter cast : ";
		cin>>m[i].cast.hero>>m[i].cast.heroine>>m[i].cast.villain;
	}
}
// Sr No	Name	price	date	category 	Cast

void display(struct Movie m[])
{
	printf("%4s | %15s | %6s | %10s | %34s | %s\n","SrNO","Name","price","date","category","cast" );
	for(i=0;i<n;i++)
	{ 
		printf("%4d | %15s | %3.2f | %8s | %10s, %10s, %10s | %s , %s , %s\n",
			i+1,m[i].name,m[i].ticket_price,m[i].date, m[i].category[0],m[i].category[1],m[i].category[2],m[i].cast.hero,m[i].cast.heroine,m[i].cast.villain);

	}
}
void sort(struct Movie m[])
{
	struct Movie temp;

	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(m[i].date,m[j].date)>0)
			{
				temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
		}
	}
}
int main()
{
	cout<<"Enter no of Movies : ";
	cin>>n;
	struct Movie m[n];
	setInfo(m);
	display(m);
	cout<<"\n:::::::::::::::::::::::::::::::::::\n\n";
	sort(m);
	display(m);
}