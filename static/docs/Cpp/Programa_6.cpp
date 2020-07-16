#include<iostream>
using namespace std;
//Jorge Clouthier-Lopez

int x;
int main()
{
	cout<<"Intrude un número entero mayor a cero"<<endl;
	cin>>x;

	while(x>0)
	{

		cout<<x<<", ";
		x=x-1;

	}

	cout<<"Fin\n";

	return 0;
}
