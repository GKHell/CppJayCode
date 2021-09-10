

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class StudentData{

	struct Student{
		string name;
		int rollno;
		float marks;
		bool status;
	};
	fstream file;
	string fileName;
public:
	StudentData(string fileName)
	{
		this->fileName = fileName;
	}
	void setData()
	{
		struct Student s;
		cout<<"Enter name : ";
		cin>>s.name;

		cout<<"Enter rollno : ";
		cin>>s.rollno;

		cout<<"Enter marks : ";
		cin>>s.marks;

		if(s.marks>=33 && s.marks<=100)
			s.status = 1;
		else
			s.status = 0;

		file.open(fileName,ios::app | ios::in);
			file<<s.rollno<<" \t "<<s.name<<" \t "<<s.marks<<" \t ";
			if(s.status)
				file<<"pass.\n";
			else
				file<<"better luck next time !!!.\n";

		cout<<"\n-----------------------------\n\n";
		file.seekg(ios::beg);
		string data;
		while(file)
		{
			// file>>data;
			getline(file,data);
			cout<<data<<endl;
		}
		file.close();
	}
};
int main()
{
	StudentData code("CH10_PXX.txt");
	code.setData();
}