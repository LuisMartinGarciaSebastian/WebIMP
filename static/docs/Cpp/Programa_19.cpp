#include<iostream>
using namespace std;
//Jorge Clouthier

int main()
{
	char pregunta[]="Ingresa tu nombre";
	char saludo[]="¡Hola";
	char nombre[50];

	cout<<pregunta<<endl;
	cin>>nombre;

	cout<<saludo<<" "<<nombre<<"!"<<endl;

	return 0;
}
