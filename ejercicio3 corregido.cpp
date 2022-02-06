#include <iostream>
using namespace std;

int calculador (int num);

int main(int argc, char *argv[]) {
	
	
	cout <<"por favor escriba un numero \n";
	int numero;
	cin >> numero;
	cout<< calculador(numero);
	
}
int calculador (int numero)
{	
	

if (numero>0) {

	
	cout<<"su numero es positivo\n";
	return 0;
}
else ;
{
	cout<<"su numero es negativo\n";

}
return 0;
}


