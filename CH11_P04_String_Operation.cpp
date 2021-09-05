
#include<iostream>
#include<string>
using namespace std;
class StringOperation
{
	string str1,str2;
	bool f;

	public:
		StringOperation(string str1,string str2)
		{
				this->str1 = str1;
				this->str2 = str2;
		}
		string status(bool f)
		{
			if(f)
				return "True";

			return "false";
		}
		void run()
		{
			f = str1>str2;
			cout<<str1<<" > "<<str2<<" = "<<status(f)<<endl;

			f = str1<str2;
			cout<<str1<<" < "<<str2<<" = "<<status(f)<<endl;
		}
};
int main()
{
	string str1,str2;
	cout<<"Enter string : ";
	getline(cin,str1);
	cout<<"Enter string : ";
	getline(cin,str2);

	StringOperation s(str1,str2);
	s.run();
}