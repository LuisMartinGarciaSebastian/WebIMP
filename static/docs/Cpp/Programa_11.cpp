//Haciendo referencia a la memoria
//Jorge Clouthier-Lopez
#include<iostream>
using namespace std;

void duplicar(int &a, int &b, int &c);

int main()
{
	int x, y, z;
	cout<<"Introduce x"<<endl;
	cin>>x;
	cout<<"Introduce y"<<endl;
	cin>>y;
	cout<<"introduce z"<<endl;
	cin>>z;

	duplicar(x,y,z);

	cout<<"x="<<x<<" y="<<y<<" z="<<z<<"\n";

	return 0;
}

void duplicar(int &a, int &b, int &c)
{
	a=a*2;
	b=b*2;
	c=c*2;
}
