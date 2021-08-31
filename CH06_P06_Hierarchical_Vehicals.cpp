
#include<iostream>
#include<string>
using namespace std;
/**
 * properties = variable
 *     action = method
 * */

// understanding protected
// understanding default value of method  
class Vehical{
protected: //protected for only child classes as well self.
	string company,color;
	int tires,seats;
public:
	void display()
			{
				cout<<"\ncompany : "<<company<<"\n\t Color : "<<color<<"\n\t\t tires : "<<tires<<"\n\t\t\t seats : "<<seats<<endl;
			}
};
class Bike:public Vehical{


	public:
		Bike(string company,string color,int tires=2,int seats=2)
		{
			this->company = company;
			this->color = color;
			this->tires = tires;
			this->seats = seats;
			cout<<"Object(BIKE) has been created..\n";
		}

		
};
class Car:public Vehical
{

public:
	Car(string company,string color,int tires=4,int seats=4)
		{
			this->company = company;
			this->color = color;
			this->tires = tires;
			this->seats = seats;
			cout<<"Object(Car) has been created..\n";
		}

		
};
int main()
{
	Bike b("Honda","black",3);
	b.display();
	cout<<"----------------------------------\n";
	Car c("Hondacity","black");
	c.display();
}