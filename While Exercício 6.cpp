#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exerc�cio
		Crie um algoritmo que solicite um n�mero inteiro positivo
		ao usu�rio e depois imprima x vezes os n�meros naturais �mpares.
		
		ex: Digitar o n�mero 5 imprimir (1, 3, 5, 7, 9)
	
	*/
	
	int numero, contador, impar;
	
	
	cout << "Digite um n�mero inteiro positivo: \n";
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
