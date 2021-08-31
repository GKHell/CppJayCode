
/**
 * 	function : set of instructions or group for perform specific task.
 * 	function  : indicates by () bracket
 *  types:
 * 		Build-in
 * 		user-defined.
*/
#include<iostream>
#include<string>
using namespace std;
/**
 * function prototype[header]
 * function body[code] 
 * 	
 * returnType Name(args...) // prototype
 * {
 * 		//body
 * 		//return statement
 * }
 * 
 * */
void display()
{
	cout<<"Hello World...\n";
}
void display(string nx)
{
	cout<<"Hello "<<nx;
}
int main()
{
	display();
	display("Jay");	
}