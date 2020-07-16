//valor por default en una función
//Jorge Clouthier-Lopez
#include<iostream>
using namespace std;

int dividir(int a, int b=2)
{
	int r;
	r=a/b;
	return(r);
}

int main()
{
	cout<<dividir(16)<<endl;
	cout<<dividir(16,4)<<"\n";
	return 0;
}
