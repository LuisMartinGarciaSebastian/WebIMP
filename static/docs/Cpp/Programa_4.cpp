#include<iostream>
#include<string>
using namespace std;
//Jorge Clouthier-Lopez

int main()
{
	string x;

	cout<<"What is your name?"<<endl;

	getline(cin,x);

	cout<<"Hi "<<x<<endl;

	cout<<"What is yoyr faorite sport?"<<endl;
	getline(cin,x);
	cout<<"I like "<<x<<" too."<<endl;

	return 0;
}
