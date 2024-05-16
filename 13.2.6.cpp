#include <iostream>
#include <cmath>
using namespace std;
double ca(double a, double b, double c){
	double s = (a+b+c)/2.0;
	double area = sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}
int main()
{
	int i;
	cout << "1.Area of circle\n2.Area of rectangle\n3.Area of triangle\nEnter your choice : ";
	cin>>i;
	switch(i){
		case 1:
		double a;
		cout << "Enter radius of the circle : ";
		cin>>a;
		cout<< "The area of circle = "<<3.14*a*a<<endl;
		break;
		case 2:
		double b,c;
		cout << "Enter length andbreadth of rectangle : ";
cin>>b>>c;
		cout<< "The area of rectangle = "<<b*c<<endl;
		break;
		case 3:
		double s1, s2, s3;
		cout << "Enter three sides of a triangle : ";
		cin>>s1>>s2>>s3;
		cout<< "The area of triangle = "<< ca(s1,s2,s3)<<endl;
		break;
		default:
		cout<< "wrong choice!!!"<<endl;
		break;
	}
}
