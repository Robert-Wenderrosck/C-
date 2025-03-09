# include <iostream>

#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int numero1;
	
	numero1 = 10;
	
	cout << "------ Valor Inicial ------\n";
	cout << "Número: " << numero1 << "\n";
	
	//Multiplica o valor por 2 
	numero1*=2;
	cout << "Número: " << numero1 << "\n";
	
	//Dividindo o valor por 4
	numero1/=4;
	
	cout << "\n------ Valor Dividido por 4------\n";
	cout << "Número " << numero1 << "\n";
	
	//--------------- PÓS FIXADO (Imprime o número e depois soma)---------------
	
	numero1 = 100;
	
	cout << "\n ---------- PÓS FIXADO ----------\n";
	cout << "Número = 100" << "\n";
	cout << "Número = " << numero1++ << "\n";
	cout << "Número = " << numero1 << "\n";
	
	//--------------- PRÉ FIXADO (Soma e depois imprime o número)---------------
	
	numero1 = 100;
	
	cout << "\n ---------- PRÉ FIXADO ----------\n";
	cout << "Número = 100" << "\n";
	cout << "Número = " << ++numero1 << "\n";

	

	system ("pause");
	
	return 0;
	
}
