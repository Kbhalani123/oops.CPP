//program for calculate the area of circle, rectangle and triangle usingFunction Overloadin

#include<iostream>
using namespace std;

float area(float r)
{
	return(3.14*r*r);
}
int area(int l,int b)
{
	return(l*b)
}
float area(float base,float height)
{
	return((base*height)/2);
}

int main()
{
	int l,b;
	float r,base,height;
	cout<<"Enter the radius of circle\n";
	cin>>r;
	cout<<"Enter the length and breath of rectangle\n";
	cin>>l>>b;
	cout<<"Enter the base and height of triangle\n";
	cin>>base>>height;
	cout<<"Area of circle is :\n"<<area(l,b);
	cout<<"Area of rectangle is :\n"<<area(r);
	cout<<"Area of triangle is :\n"<<area(base,height);
	
}