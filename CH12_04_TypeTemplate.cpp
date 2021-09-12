
#include<iostream>
using namespace std;

int size;

template <class me,class code>
void sort(me a[],code m)
{
	int i;
	me temp;
	for(i=0;i<size;i++)
		a[i]+=m;

	for(i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for(i=0;i<size;i++)
		cout<<" a[ "<<i<<" ]  = "<<a[i]<<endl;
}

int main()
{
	size = 5;
	float a[] = {0,34.3,54,15,17};
	sort(a,'A');

}