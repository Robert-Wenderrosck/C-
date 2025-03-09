#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1;
	
	numero1 = 10;
	
	cout << "Número 1 = " << numero1 << "\n";
	
	//Inversão da variável
	numero1 = numero1 * -1;
	cout << "----- Invertendo Valores Exemplo 1 -----";
	cout << "Número 1 = " << numero1 << "\n";
	
	
	
	
	
	
	system ("pause");
	
	return 0;
	
	
}
