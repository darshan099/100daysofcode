#include<iostream>
using namespace std;
int main()
{
	int a,*ptr1,**ptr2;
	a=10;
	ptr1=&a;
	ptr2=&ptr1;
	cout<<"Address of a="<<ptr1<<endl;
	cout<<"Address of ptr1="<<ptr2<<endl;
	ptr1=ptr1+2;
	cout<<"increment ptr1=ptr1+2 i.e Address of a ==" <<ptr1<<endl;
	ptr2=ptr2+2;
	cout<<"increment ptr2=ptr2+2 i.e Address of b == "<<ptr2<<endl;
	return 0;
}
/* OUTPUT:

Address of a=0x7ffc9bdc4514
Address of ptr1=0x7ffc9bdc4518
increment ptr1=ptr1+2 i.e Address of a ==0x7ffc9bdc451c
increment ptr2=ptr2+2 i.e Address of b == 0x7ffc9bdc4528

/*