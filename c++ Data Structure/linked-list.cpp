#include<iostream>
#include<stdlib.h>
#define NULL 0
using namespace std;
struct linkedlist
{
    int data;
    struct linkedlist *next;
};
typedef struct linkedlist node;
node *head=NULL;
int main()
{
    int ch=0;
    while(ch<5)
    {
        cout<<endl<<"Enter your choice 1. create 2.insert 3.delete 4.display"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                node *newnode,*temp;
                int key;
                newnode=(node *)malloc(sizeof(node));
                cout<<"enter value to be inserted"<<endl;
                cin>>newnode->data;
                if(head==NULL)
                {
                    head=newnode;
                }
                else
                {
                    temp=head;
                    while(temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                    temp->next=newnode;
                }
                break;
            }
            case 2:
            {
                node *newnode,*temp;
                int key;
                newnode=(node *)malloc(sizeof(node));
                cout<<"enter the value to be inserted"<<endl;
                cin>>newnode->data;
                if(head==NULL)
                {
                    newnode->next=NULL;
                    head=newnode;
                }
                else if(newnode->data <= head->data)
                {
                    newnode->next=head;
                    head=newnode;
                }
                else
                {
                    temp=head;
                    while(temp->next!=NULL && temp->next->data <= newnode->data)
                    {
                        temp=temp->next;
                    }
                    newnode->next=temp->next;
                    temp->next=newnode;
                }
                break;
            }
            case 3:
            {
                node *pr,*temp;
                int key;
                cout<<"enter value to be deleted"<<endl;
                cin>>key;
                if(head->data==key)
                {
                    temp=head->next;
                    free(head);
                    head=temp;
                }
                else
                {
                    temp=head;
                    while(temp->next!=NULL)
                    {
                        if(temp->next->data==key)
                        {
                            pr=temp->next->next;
                            free(temp->next);
                            temp->next=pr;
                            break;
                        }
                        temp=temp->next;
                    }
                }
                break;
            }
            case 4:
            {
                node *temp;
                temp=head;
                while(temp!=NULL)
                {
                    cout<<temp->data<<"--->";
                    temp=temp->next;
                }
                cout<<"NULL";
                break;
            }
        }
    }
}

/* OUTPUT:

Enter your choice 1. create 2.insert 3.delete 4.display
1
enter value to be inserted
10Enter your choice 1. create 2.insert 3.delete 4.display
1
enter value to be inserted
10

Enter your choice 1. create 2.insert 3.delete 4.display
2
enter the value to be inserted
30

Enter your choice 1. create 2.insert 3.delete 4.display
2
enter the value to be inserted
20

Enter your choice 1. create 2.insert 3.delete 4.display
4
10--->20--->30--->NULL
Enter your choice 1. create 2.insert 3.delete 4.display
3
enter value to be deleted
20

Enter your choice 1. create 2.insert 3.delete 4.display
4
10--->30--->NULL
Enter your choice 1. create 2.insert 3.delete 4.display
7


Enter your choice 1. create 2.insert 3.delete 4.display
2
enter the value to be inserted
30

Enter your choice 1. create 2.insert 3.delete 4.display
2
enter the value to be inserted
20

Enter your choice 1. create 2.insert 3.delete 4.display
4
10--->20--->30--->NULL
Enter your choice 1. create 2.insert 3.delete 4.display
3
enter value to be deleted
20

Enter your choice 1. create 2.insert 3.delete 4.display
4
10--->30--->NULL
Enter your choice 1. create 2.insert 3.delete 4.display
7

*/