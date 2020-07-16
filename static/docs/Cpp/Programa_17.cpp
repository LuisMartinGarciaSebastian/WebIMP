//matrix array
#include<iostream>
using namespace std;
//Jorge CLouthier
#define largo 7
#define ancho 3

int A[largo][ancho];
int i, j;
int k=1;

int main()
{

	for(i=0; i<largo; i++)
	{
		for(j=0; j<ancho; j++)
		{
			A[i][j]=k;
			k=k+1;
			cout<<A[i][j]<<", "<<endl;
		}
	}
	return 0;
}
