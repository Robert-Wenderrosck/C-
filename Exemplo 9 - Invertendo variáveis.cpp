#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1;
	
	//-------------------Exemplo 1----------------------------
	
	numero1 = 10;
	
	cout << "N�mero 1 = " << numero1 << "\n";
	
	//Invers�o da vari�vel
	numero1 = numero1 * -1;
	cout << "\n----- Invertendo Valores Exemplo 1 -----\n";
	cout << "N�mero 1 = " << numero1 << "\n";
	
	//-------------------Exemplo 2----------------------------
	
	numero1 = 20;
	cout << "\n----- Invertendo Valores Exemplo 2 -----\n";
	cout << "N�mero 1 = " << numero1 << "\n";
	cout << "N�mero 1 = " << -numero1 << "\n";
	cout << "N�mero 1 = " << numero1 << "\n";
	
	//-------------------Exemplo 3----------------------------
	
	numero1 = 30;
	cout << "\n----- Invertendo Valores Exemplo 3 -----\n";
	cout << "N�mero 1 = " << numero1 << "\n";
	
	numero1=-numero1;
	
	cout << "N�mero 1 = " << numero1 << "\n";
	
	
	
	
	system ("pause");
	
	return 0;
	
	
}
