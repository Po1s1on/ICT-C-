#include <iostream>
using namespace std;
int main()
{
	float radius,circumference,area;
	const float PI=3.14;
	cout<<"Enter a radius:";
	cin>>radius;
	area=PI*radius*radius;
	circumference=2*PI*radius;
	cout<<"The area of the circle is:"<<area<<endl;
	cout<<"The circumference of the circle is:"<<circumference<<endl;
	return 0;	
}
