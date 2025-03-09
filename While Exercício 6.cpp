#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exercício
		Crie um algoritmo que solicite um número inteiro positivo
		ao usuário e depois imprima x vezes os números naturais ímpares.
		
		ex: Digitar o número 5 imprimir (1, 3, 5, 7, 9)
	
	*/
	
	int numero, contador, impar;
	
	
	cout << "Digite um número inteiro positivo: \n";
	cin >> numero;
	
	contador = 0;
	impar = 1;
	
	while ( contador <= numero ){
		
		cout << "\n" << impar;
		impar = impar + 2;
		contador++; 
		
	}
	
		cout << "\n";
	
	system ("pause");
	return 0;
}
