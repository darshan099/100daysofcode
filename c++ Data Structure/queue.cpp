#include<iostream>
using namespace std;
int end_position=0;
int queue[100];
int start_position=0;
int main()
{
	int ch=0;
	while(ch<4)
	{
		cout<<"1.push 2.pop 3.display ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				if(end_position==100)
				{
					cout<<"Queue is full"<<endl;
				}
				else
				{
					cout<<"Enter value ";
					cin>>queue[end_position];
					end_position++;
				}
				break;
			}
			case 2:
			{
				if(end_position==0)
				{
					cout<<"Queue is empty"<<endl;
				}
				else
				{
					start_position++;
					cout<<"Value is popped"<<endl;
				}
				break;
			}
			case 3:
			{
				int i;
				for(i=start_position;i<end_position;i++)
				{
					cout<<queue[i]<<endl;
				}
			}
		}
	}
}
/* output:

1.push 2.pop 3.display 1
Enter value 10
1.push 2.pop 3.display 1
Enter value 20
1.push 2.pop 3.display 1
Enter value 30
1.push 2.pop 3.display 3
10
20
30
1.push 2.pop 3.display 2
Value is popped
1.push 2.pop 3.display 3
20
30
1.push 2.pop 3.display 4

*/