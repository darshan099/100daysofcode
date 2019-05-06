#include<iostream>
using namespace std;
class base
{
	public:
		void display() { cout<<"Base display() function"<<endl; }
		virtual void show() { cout <<"Base Virtual show() function"<<endl<<endl; }
};
class derived  :  public base
{
	public:
		void display(){ cout<<"Derived display() function"<<endl; }
		void show() { cout<<"Derived Virtual show() function"<<endl<<endl; }
};
int main()
{
	base objbase;
	derived objderived;
	// base pointer
	base *bptr;

	cout<<"base pointer points to base class"<<endl<<endl;
	bptr=&objbase;
	bptr->display();
	bptr->show();

	cout<<"base pointer points to derived class"<<endl<<endl;
	bptr=&objderived;
	bptr->display();
	bptr->show();

	//derived pointer
	derived *dptr;
	cout<<"derived pointer points to derived class"<<endl<<endl;
	dptr=&objderived;
	dptr->display();
	dptr->show();

	//type conversion of pointer
	cout<<"derived pointer type conversion to base class"<<endl<<endl;
	((base *) dptr)->display();
	((base *) dptr)->show();

	return 0;
}
/* OUTPUT: 

base pointer points to base class

Base display() function
Base Virtual show() function

base pointer points to derived class

Base display() function
Derived Virtual show() function

derived pointer points to derived class

Derived display() function
Derived Virtual show() function

derived pointer type conversion to base class

Base display() function
Derived Virtual show() function

/*