# include <iostream>

#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int numero1;
	
	numero1 = 10;
	
	cout << "------ Valor Inicial ------\n";
	cout << "N�mero: " << numero1 << "\n";
	
	//Multiplica o valor por 2 
	numero1*=2;
	cout << "N�mero: " << numero1 << "\n";
	
	//Dividindo o valor por 4
	numero1/=4;
	
	cout << "\n------ Valor Dividido por 4------\n";
	cout << "N�mero " << numero1 << "\n";
	
	//--------------- P�S FIXADO (Imprime o n�mero e depois soma)---------------
	
	numero1 = 100;
	
	cout << "\n ---------- P�S FIXADO ----------\n";
	cout << "N�mero = 100" << "\n";
	cout << "N�mero = " << numero1++ << "\n";
	cout << "N�mero = " << numero1 << "\n";
	
	//--------------- PR� FIXADO (Soma e depois imprime o n�mero)---------------
	
	numero1 = 100;
	
	cout << "\n ---------- PR� FIXADO ----------\n";
	cout << "N�mero = 100" << "\n";
	cout << "N�mero = " << ++numero1 << "\n";

	

	system ("pause");
	
	return 0;
	
}
