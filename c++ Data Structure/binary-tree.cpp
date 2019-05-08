#include<iostream>
using namespace std;
#define NULL 0
struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
};
typedef struct tree node;
node *root=NULL;
void display(node *root,node *prev,int height,char position)
{
	if(root!=NULL)
	{
		if(height==0)	
		{
			cout<<"root node: "<<root->data<<endl;
		}
		else
		{
			cout<<"level: "<<height<<" node value: "<<root->data<<" position: "<<position<<" of "<<prev->data<<endl;
		}
		display(root->left,root,height+1,'L');
		display(root->right,root,height+1,'R');
	}
}
int main()
{
	int ch=0;
	cout<<"BUG: DELETION OF NODES IS NOT ALWAYS CORRECT. DELETION OF ROOT NODE OR NODE WITH ONE LEAF NODE WORKS!"<<endl;
	while(ch<5)
	{
		cout<<"!.insert 2.delete 3.display"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				node *newnode;
				newnode=(node *)malloc(sizeof(node));
				cout<<"enter data";
				cin>>newnode->data;
				newnode->left=NULL;
				newnode->right=NULL;
				if(root==NULL)
				{
					root=newnode;
				}
				else 
				{
					node *temp;
					temp=root;
					while(1)
					{
						if(temp->data < newnode->data)
						{
							if(temp->right==NULL)
							{
								temp->right=newnode;
								break;
							}
							temp=temp->right;
						}
						else
						{
							if(temp->left==NULL)
							{
								temp->left=newnode;
								break;
							}
							temp=temp->left;
						}
					}
				}
				break;
			}
			case 2:
			{
				int ele;
				node *temp,*pleft,*pright;
				temp=root;
				cout<<"enter node value to be deleted. WARNING: Do not delete the root node"<<endl;
				cin>>ele;
				while(1)
				{
					if(temp->data < ele)
					{
						if(temp->right->data == ele)
						{
							pright=temp->right->right;
							pleft=temp->right->left;
							free(temp->right);
							temp->right=pright;
							temp->left=pleft;
							break;
						}
						else
						{
							temp=temp->right;
						}
					}
					else
					{
						if(temp->left->data == ele)
						{
							pright=temp->left->right;
							pleft=temp->left->left;
							free(temp->left);
							temp->right=pright;
							temp->left=pleft;
							break;
						}
						else
						{
							temp=temp->left;
						}
					}
				}
				break;
			}
			case 3:
			{
				node *temp;
				temp=root;
				cout<<"Displaying using depth first search"<<endl;
				display(root,root,0,'L');
				break;
			}
		}
	}
}

/* OUTPUT: 
!.insert 2.delete 3.display
1
enter data10
!.insert 2.delete 3.display
1
enter data20
!.insert 2.delete 3.display
1
enter data5
!.insert 2.delete 3.display
3
Displaying using depth first search
root node: 10
level: 1 node value: 5 position: L of 10
level: 1 node value: 20 position: R of 10
!.insert 2.delete 3.display
2
enter node value to be deleted. WARNING: Do not delete the root node
20
!.insert 2.delete 3.display
3
Displaying using depth first search
root node: 10
!.insert 2.delete 3.display
5
*/ 
