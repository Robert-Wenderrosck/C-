#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exercício
		Crie um algoritmo que solicite 2 números ao usuário e no final imprima o intervalo entre eles.
	*/
	
	int numero1, numero2, contador;
	
	cout << "Digite um número: \n";
	cin >> numero1;
	
	cout << "Digite outro número: \n";
	cin >> numero2;
	
	for ( contador = numero1; contador <= numero2; contador++ ){
		
		cout << contador << "\n";
		
	}
	
	
	system ("pause");
	return 0;
	
}
