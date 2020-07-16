//Arrays
#include<iostream>
using namespace std;
//Jorge Clouthier-Lopez

int A[]={1, 2, 3, 4};
int i, suma=0;

int main()
{
	for(i=0; i<4; i++)
	{
		suma=suma+A[i];
	}

	cout<<suma<<endl;

	return 0;
}
