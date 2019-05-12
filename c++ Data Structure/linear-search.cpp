#include<iostream>
using namespace std;
int main()
{
	int value[10]={1,43,2,5,7,4,3,7,9};
	int search,flag=0;
	cout<<"Enter any value ";
	cin>>search;
	int i;
	for(i=0;i<10;i++)
	{
		if(value[i]==search)
		{
			cout<<"Element is present"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Element not found"<<endl;
	}
	return 0;
}

/* output:
Enter any value 2
Element is present
*/