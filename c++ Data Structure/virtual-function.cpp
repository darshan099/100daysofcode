#include<iostream>
using namespace std;
class student //abstract class. since it only contains virtual functions
{
	public:
		// virtual function only allows function declaration. function definition should be in derived classes
		// syntax of virtual function: virtual [visibility] [function name]() = 0;
		virtual void getmark()=0;
		virtual void displaymark()=0;
};
class student1
{
	private:
		int marks;
	public:
		void getmark()
		{
			cout<<"enter marks of student 1";
			cin>>marks;
		}
		void displaymark()
		{
			cout<<"marks of student 1 is "<<marks<<endl;
		}
};
class student2
{
	private:
		int marks;
	public:
		void getmark()
		{
			cout<<"enter marks of student 2";
			cin>>marks;
		}
		void displaymark()
		{
			cout<<"marks of student 2 is "<<marks<<endl;
		}
};
class student3
{
	private:
		int marks;
	public:
		void getmark()
		{
			cout<<"enter marks of student 3";
			cin>>marks;
		}
		void displaymark()
		{
			cout<<"marks of student 3 is "<<marks<<endl;
		}
};

int main()
{
	student1 obj1;
	student2 obj2;
	student3 obj3;
	obj1.getmark();
	obj1.displaymark();
	obj2.getmark();
	obj2.displaymark();
	obj3.getmark();
	obj3.displaymark();
	return 0;
}