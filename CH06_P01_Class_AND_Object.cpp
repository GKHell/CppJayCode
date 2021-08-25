/**
 * class is user defined data type
 * class =       variables       +   function
 * 		 (data member : private)	(method : public)
 * 
 * class is keyword now.
 * default access specifier private
 * 		```
 * 			private means only  class could access it.
 * 
 * 		```
 *  */
#include<iostream>
#include<string>
using namespace std;
class Book{
		// private
		string name;
		double price;

	public:
		void getData() //method 1
		{
			cout<<"Name  : "<<name<<endl;
			cout<<"price : "<<price; 
		}
		void setData() //method 2
		{
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter price : ";
			cin>>price;
		}
		
};
int main()
{
	Book b; // creating object of Book as 'b'
	b.setData(); //set the value of members	
	b.getData(); // get the value of members

}