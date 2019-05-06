#include<iostream>
using namespace std;
class op
{
	int x;
	public:
		op(){x=0;} //initialize value 
		op(int a)
		{
			x=a;
		}
		op operator + (op obj) //using operator overloading
		{
			op temp;
			temp.x=x+obj.x;
			return(temp);
		}
		void display()
		{
			cout<<x;
		}
};
int main()
{
	op obj1(10);
	op obj2(20);
	op obj3;
	obj3=obj1+obj2;
	obj3.display();
}