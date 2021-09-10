

#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
using namespace std;
class Copy
{
	ifstream file1;
	ofstream file2;
	string line;

public:
		Copy(string f1,string f2)
		{

			file1.open(f1);
			if(!file1)
			{
				cout<<"file is not exits";
				exit(0);
			}
			file2.open(f2);
			while(file1)
			{
				getline(file1,line);
				file2<<line<<endl;
				cout<<"..";
			}
			file2.close();
			file1.close();

		}


};
int main()
{
	Copy p("CH04_P12_For_loops.cpp","CH10_PYY.txt");
}