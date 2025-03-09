#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	/*Exercício 
	Escreva um algoritmo que exiba os números de 1 até 10 na tela.
	*/
	
	int numero;
	
	numero = 1;
	
	while (numero < 11){
		
		cout << numero << "\n";
		
		numero++;
		
		
	}
	
	
	
	
	
	system ("pause");
	return 0;
}
