#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exerc�cio
		Crie um algoritmo que calcule o fatorial de um n�mero inteiro
		fornecido pelo usu�rio. Ex.: 5! = 5.4.3.2.1 = 120
		
	*/
	
	int fatorial, numero, contador;
	
	fatorial = 1;
	
	cout << "Digite um n�mero para calcular o fatorial dele: ";
	cin >> numero;
	
	for ( contador = numero; contador >= 1; contador-- ){
		
		fatorial = fatorial * contador;
		
	}
	
	cout << "O fatorial de " << numero << " � " << fatorial << "\n";
	
	system ("pause");
	return 0;
}
