// large data type  to small data type  [ chance of data loose]
#include <iostream>
using namespace std;
int main()
{
	float f = 65.43;
	int  i = (int)f; // explicit data type

	cout<<"data in float  : "<<f<<endl;
	cout<<"  data in int  : "<<(char)i<<endl;

}