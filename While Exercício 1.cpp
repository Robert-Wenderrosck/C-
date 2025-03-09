#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	
	/* Exercício
	Crie um algoritmo que solicite ao usuário um número inteiro.
	e só saia da rotina quando o usuário digitar um número entre 1 e 5.
	*/
	
	int numero;
	
	cout << "\nDigite um número inteiro entre 1 e 5: \n";
	cin >> numero;
	
	while ( numero > 5 || numero < 1 ){
		
		cout << "\nDigite um número inteiro entre 1 e 5: \n";
		cin >> numero;
			
		}
	
		
	
	system ("pause");
	return 0;
	
}
