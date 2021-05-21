#include<iostream>
using namespace std;
class number{
	int a;
	public:
		number(int num)
		{
			a=num;
		}
		number()
		{
			a=0;
		}
		number(number &obj)
		{
			cout<<"the constructor is now called "<<endl;
			a=obj.a;
		}
		
		void print()
		{
			cout<<"The number of the object is :"<<a<<endl;
		}
		
};
int main()
{
	number q1,q2,q3(90);
	
	q1.print();
	q3.print();
	
	number s1(q3);
	s1.print();
	
	number s2=q3;
	s2.print();
	
	number s3(q1);
	s3.print();
	
	return 0;
	
	
	
}
