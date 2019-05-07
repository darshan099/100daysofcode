#include<iostream>
#include<stdlib.h>
#define NULL 0
using namespace std;
struct linkedlist
{
    int data;
    struct linkedlist *next;
    struct linkedlist *prev;
};
typedef struct linkedlist node;
node *head=NULL;
int main()
{
	int ch=0;
	while(ch<5)
	{
		cout<<endl<<"1.create 2.insert 3.delete 4.display"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				if(head==NULL)
				{
					node *newnode;
					newnode=(node *)malloc(sizeof(node));
					cout<<"create 1st element"<<endl;
					cin>>newnode->data;
					newnode->next=NULL;
					head=newnode;
				}
				else
				{
					cout<<"select insert option. First node already created"<<endl;
				}
				break;
			}
			case 2:
			{
				node *temp,*newnode,*p;
				newnode=(node *)malloc(sizeof(node));
				cout<<"insert element"<<endl;
				cin>>newnode->data;
				temp=head;
				while(temp->next!=NULL)
					temp=temp->next;
				newnode->next=NULL;
				newnode->prev=temp;
				temp->next=newnode;
				break;
			}
			case 3:
			{
				int key;
				node *temp,*pr;
				temp=head;
				cout<<"enter deleting element"<<endl;
				cin>>key;
				if(head->data==key)
				{
					pr=head->next;
					free(head);
					pr->prev=NULL;
					head=pr;
					break;
				}
				while(temp->next!=NULL)
				{
					if(temp->next->data==key)
					{
						if(temp->next->next==NULL)
						{
							free(temp->next);
							temp->next=NULL;
						}
						else
						{
							pr=temp->next->next;
							free(temp->next);
							temp->next=pr;
							pr->prev=temp;
						}
						break;
					}
					temp=temp->next;
				}
				break;
			}
			case 4:
			{
				node *temp;
				temp=head;
				while(temp!=NULL)
				{
					cout<<temp->data<<"-->";
					temp=temp->next;
				}
				cout<<"NULL";
				break;
			}
		}
	}
}
/* OUTPUT:

1.create 2.insert 3.delete 4.display
1
create 1st element
10

1.create 2.insert 3.delete 4.display
3
enter deleting element
10
Segmentation fault (core dumped)
[darshanpc@darshanpc c++ Data Structure]$ ./a.out 

1.create 2.insert 3.delete 4.display
1
create 1st element
10

1.create 2.insert 3.delete 4.display
2
insert element
20

1.create 2.insert 3.delete 4.display
4
10-->20-->NULL
1.create 2.insert 3.delete 4.display
3
enter deleting element
10

1.create 2.insert 3.delete 4.display
4
20-->NULL
1.create 2.insert 3.delete 4.display
6
*/
