#include<iostream>
// call by value doesn't effect the dynamic
using namespace std;
/*
	100 -> 30%
	x  -> ?
	----------
		x*30/100
*/
void sell(double price)
{
	price = price - price*0.30; // doesn't change the main variable/parameter
	cout<<"PHASE 2: during discount : "<<price<<endl;
} 
int main()
{
	double price;
	cout<<"Enter the price of Product : ";
	cin>>price;
	cout<<"PHASE 1: before discount : "<<price<<endl;
	
		sell(price); //PHASE 2

	cout<<"PHASE 3:  after discount : "<<price<<endl;

}