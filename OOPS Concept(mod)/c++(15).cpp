// program for swap the two numbers using friend function withoutusing third variable

#include<iostream>
using namespace std;

class Swap {
	int num;
	
public:
       Swap(int num)
	   {
	   	this->num=num;
	   	
	   }
	   friend void swap(Swap& s1, Swap& s2);	
};

void swap(Swap& s1, Swap& s2)
{
	int temp;
	cout<<"before swapping\n :"<<s1.num<<" "<<s2.num;
	temp=s1.num;
	s1.num=s2.num;
	s2.num=temp;
	cout<<"after swapping\n :"<<s1.num<<" "<<s2.num;
}

int main()
{
	Swap s1(6),s2(10);
	swap(s1,s2);
	return 0;
}