#include<iostream>
using namespace std;
int main()
{
	int numbers[10]={1,4,3,6,2,6,88,44,22};
	int search,temp,i,j,flag=0;
	cout<<"Enter search value ";
	cin>>search;
	// first sort the numberss
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(numbers[i]>numbers[j])
			{
				temp=numbers[i];
				numbers[i]=numbers[j];
				numbers[j]=temp;	
			}
		}
	}

	//search now
	int init=0,final=10,m;
	while(init<final)
	{
		m=(final+init)/2;
		if(numbers[m]==search)
		{
			flag=1;
			cout<<"element found"<<endl;
			break;
		}
		else if(numbers[m]<search)
		{
			init=m+1;
		}
		else if(numbers[m]>search)
		{
			final=m-1;
		}
	}
	if(flag==0)
	{
		cout<<"number not found"<<endl;
	}
}
/* output:

Enter search value 2
element found

*/
