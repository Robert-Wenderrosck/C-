#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	
	/* Exerc�cio
	Crie um algoritmo que solicite ao usu�rio um n�mero inteiro.
	e s� saia da rotina quando o usu�rio digitar um n�mero entre 1 e 5.
	*/
	
	int numero;
	
	cout << "\nDigite um n�mero inteiro entre 1 e 5: \n";
	cin >> numero;
	
	while ( numero > 5 || numero < 1 ){
		
		cout << "\nDigite um n�mero inteiro entre 1 e 5: \n";
		cin >> numero;
			
		}
	
		
	
	system ("pause");
	return 0;
	
}
