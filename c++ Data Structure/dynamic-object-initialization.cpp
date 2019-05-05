#include<iostream>
using namespace std;
class student
{
	public:
		student();
		student(int rollno, int marks=0); // constructor with default parameter value (i.e marks=0)
		student(int rollno, int marks, char pass); // constructor overloading
};
// always create a constructor with no parameters
student ::  student()
{
	cout<<"constructor called"<<endl;
}
student :: student(int rollno,int marks)
{
	cout<<"Enter roll no = "<<rollno<<endl;
	cout<<"marks = "<<marks<<endl;
};
student :: student(int rollno,int marks, char pass)
{
	cout<<"Enter roll no = "<<rollno<<endl;
	cout<<"marks = "<<marks<<endl;
	cout<<"passed = "<<pass<<endl;
}
int main()
{
	student obj1,obj2,obj3;
	cout<<"constructor with default argument (i.e. marks)"<<endl;
	obj1=student(10); // dynamic initialization of object
	cout<<"constructor with changing default argument (i.e. marks)"<<endl;
	obj2=student(10,100); // dynamic initialization of object
	cout<<"constructor overloading"<<endl;
	obj3=student(10,99,'p'); // dynamic initialization of object
	return 0;
}
