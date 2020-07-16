#include<iostream>
using namespace std;

int main()
{

	int a, b, c;
	float d, e;

	a=3;
	b=1;

	c=(a>b)? a:b;

	cout<<c<<endl;

	d=sizeof(int);
	e=sizeof(float);

	cout<<"The size of int is "<<d<<" bytes"<<endl;
	cout<<"The size of float is "<<e<<" bytes"<<endl;

	return 0;
}
