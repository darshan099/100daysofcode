#include<iostream>
using namespace std;
class student
{
	private:
		int marks;
	public:
		void getmarks(int score)
		{
			marks=score;
		}
		friend void display(student obj);
};
void display(student obj)
{
	cout<<"marks is "<<obj.marks;
}
int main()
{
	student stu;
	stu.getmarks(10);
	display(stu);
}