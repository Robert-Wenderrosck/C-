#include <iostream>

#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Incremento de vari�veis 
	int numero1;
	
	//Inicializo com 0 
	numero1 = 0;
	
	//Imprimindo o resultado
	cout << "-----------Exemplo 1-----------------------\n";
	cout << numero1 << "\n";
	
	//1� forma de Incremento: Somando 1 na vari�vel 
	numero1 = numero1 + 1;
	
	//Imprimindo o resultado
	cout << numero1 << "\n\n";
	
	//2� forma de Incremento: Somando 1 na vari�vel 
	numero1++;
	
	//Imprimindo o resultado
	cout << "-----------Exemplo 2-----------------------\n";
	cout << numero1 << "\n\n";
	
	//Decremento 1 na vari�vel
	numero1--;
	
	//Imprimindo o resultado
	cout << numero1 << "\n\n";
	
	//3� forma de Incremento: Somando 1 na vari�vel 
	numero1 += 1;
	
	//Imprimindo o resultado
	cout << "-----------Exemplo 3-----------------------\n";
	cout << numero1 << "\n\n";
	
	//Decremento 1 na vari�vel
	numero1 -= 1;
	
	//Imprimindo o resultado
	cout << numero1 << "\n\n";
	
	
	system ("pause");
	
	return 0;
}
