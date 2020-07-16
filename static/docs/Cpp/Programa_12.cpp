#include<iostream>
using namespace std;
//Jorge Clouthier

void AnteriorSiguiente(int x, int &y, int &z);

int main()
{
	int x, y, z;

	cout<<"Ingresa un valor entero: ";
	cin>>x;

	AnteriorSiguiente(x,y,z);

	cout<<"El valor anterior es "<<y<<" y el valor siguiente es "<<z<<endl;

	return 0;
}

void AnteriorSiguiente(int x, int &y, int &z)
{
	y=x-1;
	z=x+1;
}
