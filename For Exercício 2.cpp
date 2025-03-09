#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exercício
		Crie um algoritmo que leia 10 números e imprima a quantidade de pares e de impares.
	*/
	
	int numero, par, contador;
	
	
	for ( contador = 1; contador <= 10; contador++ ){
		
		cout << "Digite o número " << contador << ": \n";
		cin >> numero;
		
		if ( numero % 2 == 0 ){
			
			par++;
			
			
		}
		
		
		
	}
	
	cout << "\nQuantidade números pares: " << par;
	cout << "\nQuantidade números impares: " << 10 - par << "\n";
	
	system ("pause");
	return 0;
	
}
