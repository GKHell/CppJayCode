
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class File{
	string fileName;
	ifstream file;
	string data;
public:
	void readDataFromFile()
	{
		cout<<"Enter the file Name :";
		cin>>fileName;

		file.open(fileName);

		if(!file)
		{
			cout<<"file is not available..\n";
			return;
		}
		while(file)
		{
			// file>>data;
			getline(file,data);
			cout<<data<<endl;
		}
		file.close();
	}

	~File()
	{
		cout<<"done with "<<this->fileName<<endl;
	}
};
int main()
{
	File p1;
	p1.readDataFromFile();
}