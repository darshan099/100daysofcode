#include<iostream>
using namespace std;
int position =0,stack[100];
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
				if(position==100)
				{
					cout<<"Stack full"<<endl;
				}
				else
				{
					cout<<"Enter value to be entered ";
					cin>>stack[position];
					position++;
				}
				break;
			}
			case 2:
			{
				if(position==0)
				{
					cout<<"Stack is empty"<<endl;
				}
				else
				{
					position--;
					cout<<"popped"<<endl;
				}
				break;
			}
			case 3:
			{
				int i;
				for(i=0;i<position;i++)
				{
					cout<<stack[i]<<endl;
				}
				break;
			}
		}
	}
}

/* output: 

1.push 2.pop 3.display 1
Enter value to be entered 10
1.push 2.pop 3.display 1
Enter value to be entered 20
1.push 2.pop 3.display 1
Enter value to be entered 30
1.push 2.pop 3.display 3
10
20
30
1.push 2.pop 3.display 2
popped
1.push 2.pop 3.display 3
10
20
1.push 2.pop 3.display 5

*/