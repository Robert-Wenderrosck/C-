#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exercício
	Crie um algoritmo que solicite ao usuário a entrada de 3 números
	e depois imprima-os na tela em ordem decrescente.
	*/
	
	int numero1, numero2, numero3;
	
	cout << "Digite o primeiro número: ";
	cin >> numero1;
	
	cout << "Digite o segundo número: ";
	cin >> numero2;
	
	cout << "Digite o terceiro número: ";
	cin >> numero3;
	
	if (numero1 > numero2 && numero2 > numero3 ){
		
		cout << numero1 << "\n" << numero2 << "\n" << numero3 << "\n";
		
	}else if (numero1 > numero3 && numero3 > numero2 ){
		
		cout << numero1 << "\n" << numero3 << "\n" << numero2 << "\n";
		
	}else if (numero2 > numero1 && numero1 > numero3 ){
		
		cout << numero2 << "\n" << numero1 << "\n" << numero3 << "\n";
		
	}else if (numero2 > numero3 && numero3 > numero1 ){
		
		cout << numero2 << "\n" << numero3 << "\n" << numero1 << "\n";
		
	}else if (numero3 > numero1 && numero1 > numero2 ){
		
		cout << numero3 << "\n" << numero1 << "\n" << numero2 << "\n";
		
	}else{
		
		cout << numero3 << "\n" << numero2 << "\n" << numero1 << "\n";
	
	}
	
	system ("pause");
	return 0;
	
}
