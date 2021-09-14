

#include"CH14_01_datacode.h"
int main()
{
	jarvis_reg r;

	bool f;
	f = r.signup();
		if(f)
			cout<<"signup done";
	
		f = r.login();
		if(f)
			cout<<"login done..";
		else
			cout<<"login fails..";
}