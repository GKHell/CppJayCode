//string.h functions
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>  //for functions
int main()
{

    char str1[100],str2[100];
clrscr();
	cout<<"Enter the string 1 : ";
	gets(str1);
	textattr(12);
	int len = strlen(str1); // length find
	cprintf("Length : %d\n\r",len);

	strcpy(str2,str1); // copy str1 -> str2
	strcpy(str2,"abc");// copy "abc" -> str2
	cout<<"str 1 : "<<str1<<"\tstr 2 : "<<str2<<"\n";

	strlwr(str1); // convert lowecase
	cprintf("strlwr : %s \n\r",str1);
	strupr(str1); 	// convert uppercase
	cprintf("strupr : %s \n\r",str1);

	strlwr(str1);	//convert lowercase
	cout<<"str 1 : "<<str1<<"\tstr 2 : "<<str2<<"\n";
	cout<<"status : "<<strcmp(str1,str2)<<endl; 
	/**
		compare str1,str2 with respect to ascii value
		if both are then 0
		str1 > str2 = +ve
		str1 < str2 = -ve
	*/

	cprintf("finding 'h' in %s at %p\n\r",str1,strchr(str1,'h')); //if character is found then gives address 
	cprintf("finding \"hell\" in %s at %p\n\r",str1,strstr(str1,"hell")); //if string is found then gives address

	strrev(str1);//reverse the text 
	cout<<"reverse the str : "<<str1<<endl;

	strset(str1,'*');// mask the string with given character.
	cprintf("set : %s\n\r",str1);
getch();
return 0;
}
