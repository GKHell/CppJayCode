/**
 * destructor :
 * 		used to destroy the object
 * */
#include<iostream>
using namespace std;
class Result{
	bool status;

	public:
		Result()
		{
			cout<<"Enter the status : ";
			cin>>status;
			cout<<"Constructor is running...\n";
		}

			void see()
			{
				if(this->status)
				{
					cout<<"pass\n";
				}
				else
				{
					cout<<"fail\n";
				}
			}
		~Result()
		{
			cout<<"Destructor is running.\n";
		}


};
int main()
{
	Result jay;
	jay.see();
	cout<<"hell of code...\n";
}