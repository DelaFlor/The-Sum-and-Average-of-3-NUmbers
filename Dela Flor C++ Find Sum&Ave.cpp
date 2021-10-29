#include<iostream>
using namespace std;
int main()
{
	cout<<"C++ Program to Find the Sum and Average of three Numbers"<<endl;
	float a, b, c, sum;
	float ave;
	cout<<"Enter 1st number:";
	cin>>a;
	cout<<"Enter 2nd number:";
	cin>>b;
	cout<<"Enter 3rd number";
	cin>>c;
	sum=a+b+c;
	ave=sum/3;
	cout<<"The Sum of 3 Numbers: ["<<a<<"+"<<b<<"+"<<c<<"]="<<sum<<endl;
	cout<<"The Average of 3 Numbers: ["<<a<<","<<b<<","<<c<<"]="<<sum<<endl;
	
	return 0;
}
