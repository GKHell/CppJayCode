
// structure : {members..}
#include<iostream>
#include<string>
using namespace std;
struct Movie{

		string name;
		double ticket_price;
		string catogory[3];
		string date;

		struct leadCast{
			string hero;
			string heroine;
			string villain;
		}cast;

};

int main()
{
	struct Movie m;
	cout<<"Enter name : ";
	cin>>m.name;
	cout<<"Enter ticket_price : ";
	cin>>m.ticket_price;
	cout<<"Enter catogory : ";
	for(int i=0;i<3;i++)
		cin>>m.catogory[i];

	cout<<"Enter date : ";
	cin>>m.date;
	cout<<"Enter cast : ";
	cin>>m.cast.hero>>m.cast.heroine>>m.cast.villain;

	cout<<"\n------------------------------------\n";
	cout<<"\nName : "<<m.name;
	cout<<"\nticket_price : "<<m.ticket_price;
	cout<<"\ncatogory : ";
	for(int i=0;i<3;i++)
	{
		cout<<m.catogory[i]<<" | ";
	}
	cout<<"\ndate : "<<m.date;
	cout<<"\n Cast : "<<m.cast.hero<<", "<<m.cast.heroine<<", "<<m.cast.villain;

}