#include<iostream>
using namespace std;
//Jorge Clouthier

int suma(int,int);

int main()
{
int x, y, z;

	cout<<"Ingresa el primer número entero"<<endl;
	cin>>x;

	cout<<"Ingresa el segundo número entero"<<endl;
	cin>>y;

	z=suma(x,y);

	cout<<"La suma de "<<x<<"+"<<y<<" es igual a "<<z<<endl;

	return 0;
}

int suma(int a, int b)
{
	int resultado;
	resultado=a+b;
	return (resultado);
}

