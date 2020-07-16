#include<iostream>
using namespace std;
//Jorge Clouthier

int main(int argc, char** argv)
{
	cout<<"Has ingresado "<<argc<<" argumentos."<<endl;

	for(int i=0; i<argc; i++)
	{
		cout<<argv[i]<<"\n";
	}
	return 0;
}
