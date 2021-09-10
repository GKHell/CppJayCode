
#include<fstream>
#include<iostream>
/*
	1. file.open(fileName,Mode)
	2. operation perform
	3.file.
*/
using namespace std;
class File{
ofstream file; //write mode
string fileName = "CH10_PXX.txt";
string line;
	public :
				void write_Create_file(){
					
					file.open(fileName);
						// cout<<"Hello world";
					file<<"code of Hell\n";
					file<<"1234567890";
					file.close();
				
				}
	//----------------------------------------------------------
				void insertLine()
				{
						file.open(fileName);
						cout<<"Enter data [press !q to exit]: \n";
						
						while(file)
						{
							getline(cin,line);
							
							if(line=="!q")
								break;
							
							file<<line<<endl;
			
						}
						file.close();
				}
		//------------------------------------------------------------
				void insertTable()
				{
					file.open(fileName);
						for(int i=1;i<=10;i++)
						{
							for(int j=1;j<=5;j++)
								file<<j<<" x "<<i<<" = "<<i*j<<"\t";
							file<<endl;
						}
					file.close();
				}
	~File()
	{
		cout<<"\n\n\nFile operation are done..";
	}
};
int main()
{
	File p1,p2,p3;
	// p1.write_Create_file();
	// p2.insertLine();
	p3.insertTable();
}