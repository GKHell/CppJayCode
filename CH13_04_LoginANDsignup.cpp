
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

		return 1;
		file.close();
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
int main()
{
	jarvis_reg r;

	int choice;
	me:
	cout<<"\n\nEnter 1 for login : \n";
	cout<<"Enter 2 for signup: \n";
	cout<<"Enter choice : ";
	cin>>choice;
	bool f;
	switch(choice)
	{
		case 1: 
			f = r.login();
				if(f)
					cout<<"login done..";
				else
					cout<<"\ainvalid pass/username";

				break;
		case 2:
			f = r.signup();
			if(f)
				cout<<"signup done...";
			break;

		default : cout<<"lya \akhbr nthi pdti. \u3645";
		goto me;
	}
 
	
}