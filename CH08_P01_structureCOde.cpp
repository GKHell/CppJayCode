
// structure : {members..}
#include<iostream>
#include<string>
using namespace std;
struct Movie{

		string name;
		double ticket_price;
		string leadCast;
		string catogory[3];
};

int main()
{
	struct Movie m;
	// m.name = "LOki";
	// m.ticket_price = 200;
	// m.leadCast = "Tom";
	// m.catogory[0] = "Drama";
	// m.catogory[1] = "Action";
	// m.catogory[2] = "Thrill";
	cout<<"Enter name : ";
	cin>>m.name;
	cout<<"Enter ticket_price : ";
	cin>>m.ticket_price;
	cout<<"Enter lead cast : ";
	cin>>m.leadCast;
	cout<<"Enter catogory : ";
	for(int i=0;i<3;i++)
		cin>>m.catogory[i];

	cout<<"\n------------------------------------\n";
	cout<<"\nName : "<<m.name;
	cout<<"\nticket_price : "<<m.ticket_price;
	cout<<"\nleadCast : "<<m.leadCast;
	cout<<"\ncatogory : ";
	for(int i=0;i<3;i++)
	{
		cout<<m.catogory[i]<<" | ";
	}

}