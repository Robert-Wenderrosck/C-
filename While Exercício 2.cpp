#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	/*Exerc�cio 
	Escreva um algoritmo que exiba os n�meros de 1 at� 10 na tela.
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
