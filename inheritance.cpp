#include<iostream>
using namespace std;
//base class
class student
{
	protected:
		int rollno;
	protected:
		// scope of getrollno() is only till derived class. you cannot call this function apart from derived class
		void getrollno();
	public:
		// scope of displayrollno() is on the whole program. call it from anywhere!
		void displayrollno();
};

// we can define the function outside the class only if its "protected" or "public". 
// if we use "private" the function should be defined inside the class
void student :: getrollno()
{
	cout<<"enter rollno";
	cin>>rollno;
}

void student :: displayrollno()
{
	cout<<"your rollno is "<<rollno<<endl;
}

//derived class
class marks : public student
{
	protected:
		int marks;
	public:
		void getmarks();
		void displaymarks();
};
void marks :: getmarks()
{
	// since getrollno() is protected. we can call only from derived class. 
	getrollno();
	cout<<"enter marks";
	cin>>marks;
	cout<<"Inheriting rollno from base class. rollno = "<<rollno<<endl;
}
void marks ::  displaymarks()
{
	cout<<"your marks is "<<marks<<endl;
}

int main()
{
	//no need to make objects for base class
	marks obj;
	obj.getmarks();
	// since displayrollno() is public. we can call anywhere from the program.
	obj.displayrollno();
	obj.displaymarks();
	return 0;
}