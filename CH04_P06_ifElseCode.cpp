

#include<iostream>
#include<string>
using namespace std;
int i,n;

struct Student{

	int rollno;
	char name[100];
	float marks;
	char grade;

}s[100];

int main()
{

	cout<<"Enter no of Students : ";
	cin>>n;

	cout<<"Enter the data : \n";
	for(i=0;i<n;i++)
	{
		cout<<"\nStudent "<<i+1<<" \nEnter rollno : ";
		cin>>s[i].rollno;

		cout<<"Enter name : ";
		cin>>s[i].name;

		cout<<"Enter marks : ";
		cin>>s[i].marks;

		if(s[i].marks>=80 && s[i].marks<=100)
			s[i].grade = 'A';

		else if(s[i].marks<80 && s[i].marks>=60)
			s[i].grade = 'B';

		else if(s[i].marks<60 && s[i].marks>=40)
			s[i].grade = 'C';

		else if(s[i].marks<40 && s[i].marks>=33)
			s[i].grade = 'D';

		else if(s[i].marks<33 && s[i].marks>=0)
			s[i].grade = 'F';
		else
		{
			cout<<"\t\tinvalid marks...";
			i--;
		}


	}

	cout<<"\n-----------------\n\n";

	for(i=0;i<n;i++)
	{
		printf("%2d %10s %3.2f%%  %c  \n",s[i].rollno,s[i].name,s[i].marks,s[i].grade);
	}
}