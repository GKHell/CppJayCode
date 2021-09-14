
#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>

using namespace std;
class jarvis_reg{

	string u_name,u_pass;
	fstream file;
public:
	bool signup()
	{

		file.open("./UnixCMDs/CH13_database.txt",ios::app);
		try_again:
		cout<<"\n------- signup ------------\n";
		cout<<"Enter user name : ";
		cin>>u_name;

		cout<<"Enter pass word : ";
		cin>>u_pass;

		if(u_pass.length() <= 3 || u_name.length()<1)
		{
			int f;
			cout<<"Try  again ";
			cin>>f;
			system("clear");
			goto try_again;
		}

		file<<u_name<<" "<<u_pass<<"\n";
		file.close();
		return 1;
	}
	 
	bool login()
	{
		file.open("./UnixCMDs/CH13_database.txt",ios::in);
		cout<<"\n------- login ------------\n";				
		string u_name,u_pass;
		cout<<"Enter user name : ";
		cin>>u_name;

		cout<<"Enter pass word : ";
		cin>>u_pass;
		while(file)
		{
			string name,pass;
			
			file>>name;
				if(u_name == name)
				{
					file>>pass;
						if(u_pass == pass)
							return 1;
				}
		}
		file.close();
		return 0;
	}
};