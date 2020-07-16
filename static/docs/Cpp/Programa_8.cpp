//ciclo for y condicionante if
//Jorge Clouthier-Lopez
#include<iostream>
using namespace std;

int x;
int y;

int main()
{
	cout<<"Ingresa un número entero para comnzar"<<endl;
	cin>>x;

	cout<<"Ingresa un número entero para terminar"<<endl;
	cin>>y;

	for(int i=x; i>0; i--)
	{

		if(i==y)
		{
		 break;
		}
	
		cout<<i<<endl;


	}
	cout<<"FIN!"<<endl;

	return 0;
}
