#include<stdio.h>
using namespace std;
#define NULL 0
struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
};
typedef struct tree node;
node *root=NULL,*cnode=NULL;
void insertleft(node *cnode)
{
	while(cnode->left!=NULL)
	{
		cnode=cnode->left;
	}
	cout<<"Enter left\n";
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	cin>>newnode->data;
	newnode->left=newnode->right=NULL;
	cnode->left=newnode;	
}
void insertright(node *cnode)
{
	while(cnode->right!=NULL)
	{
		cnode=cnode->right;
	}
	cout<<"Enter right\n";
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	cin>>newnode->data;
	newnode->left=newnode->right=NULL;
	cnode->right=newnode;	
}
void infix(node *cnode)
{
	if(cnode!=NULL)
	{
		infix(cnode->left);
		cout<<cnode->data<<" ";
		infix(cnode->right);
	}
}
int main()
{
	node *newnode;
	cin>>newnode->data;
	newnode->left=NULL;
	newnode->right=NULL;
	root=newnode;
	int ch=0;
	while(ch<4)
	{
		cout<<"Enter choice";
		if(ch==1)
		{
			insertleft(root);
		}
		else if(ch==2)
		{
			insertright(root);
		}
		else if(ch==3)
		{
			cout<<"infix is\n";
			infix(root);
		}
	}
	return 0;
}