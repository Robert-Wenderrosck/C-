#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exerc�cio
		Crie um algoritmo que leia 10 n�meros e imprima a quantidade de pares e de impares.
	*/
	
	int numero, par, contador;
	
	
	for ( contador = 1; contador <= 10; contador++ ){
		
		cout << "Digite o n�mero " << contador << ": \n";
		cin >> numero;
		
		if ( numero % 2 == 0 ){
			
			par++;
			
			
		}
		
		
		
	}
	
	cout << "\nQuantidade n�meros pares: " << par;
	cout << "\nQuantidade n�meros impares: " << 10 - par << "\n";
	
	system ("pause");
	return 0;
	
}
