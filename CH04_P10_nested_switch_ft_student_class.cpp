#include<iostream>
using namespace std;
int main()
{
	char div;
	int rollno;
	cout<<"Enter division :";
	cin>>div;
	cout<<"Enter rollno :";
	cin>>rollno;
	switch(div)
	{
		case 'A':
					switch(rollno)
					{
						case 1 ... 21 :cout<<"loki...";break;
						case 22 ... 35 :cout<<"Hulk...";break;
						case 36 ...50 :cout<<"groot...";break;
						default:cout<<"stark...";
					}break;
		
		case 'B':
					switch(rollno)
					{
						case 1 ... 20 :cout<<"cap...";break;
						case 21 ...40 :cout<<"sam...";break;
						case 41 ...50 :cout<<"black widow...";break;
						default: cout<<"hawkyee...";						
					}break;

		case 'C':
					switch(rollno)
					{
						case 1 ... 20 :cout<<"abomination...";break;
						case 21 ...40 :cout<<"Joker...";break;
						case 41 ...50 :cout<<"stalin...";break;
						default: cout<<"The kang...";						
					}break;


	}

}