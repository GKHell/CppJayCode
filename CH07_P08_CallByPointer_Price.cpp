#include<iostream>
// call by pointer does effect the dynamic
using namespace std;
/*
	100 -> 30%
	x  -> ?
	----------
		x*30/100
*/
void sell(double *price,double pr) //here '*' indicates the pointer
{
	*price = *price - *price*pr/100; // do change main variable/parameter
	*price = (int)*price;
	cout<<"PHASE 2: during discount : "<<*price<<endl;
} 
int main()
{
	double price;
	cout<<"Enter the price of Product : ";
	cin>>price;
	cout<<"PHASE 1: before discount : "<<price<<endl;
	
		sell(&price,30.5); //PHASE 2,& used to pass address of Variable

	cout<<"PHASE 3:  after discount : "<<price<<endl;

}