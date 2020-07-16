//Arrays como parámetros
//Jorge Clouthier
#include<iostream>
using namespace std;

void ImprimirArreglos(int arreglo[], int longitud)
{
	cout<<"-----------------------------"<<endl;
	for(int i=0; i<longitud; i++)
	{
		cout<<arreglo[i]<<", ";
	}
	
	cout<<endl;
}

int main()
{
	int A[]={1, 2, 3};
	int B[]={4, 5, 6, 7, 8};

	ImprimirArreglos(A,3);
	ImprimirArreglos(B,5);

	return 0;
}
