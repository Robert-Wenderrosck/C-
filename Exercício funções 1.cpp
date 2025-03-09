#include <iostream>
#include <locale.h>

using namespace std;

int verificaMenorNumero(int primeiroNumero, int segundoNumero);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exercício de funções 1
		Crie uma função que receba dois números inteiros 
		e retorne o menor número entre eles
		
	*/
	
	int numero1, numero2, resultado;
	
	cout << "Digite o primeiro número: ";
	cin >> numero1;
	
	cout << "Digite o segundo número: ";
	cin >> numero2;
	
	resultado = verificaMenorNumero(numero1, numero2);
	
	cout << "\n\nO menor número é " << resultado << "\n";
	
	system ("pause");
	return 0;
	
}

int verificaMenorNumero(int primeiroNumero, int segundoNumero){
	
	if ( primeiroNumero > segundoNumero ){
		
		return segundoNumero;	
		
	}else{
		
		return primeiroNumero;
		
	}
	
		
	
}
