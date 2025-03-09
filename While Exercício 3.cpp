#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exerc�cio 
	Crie um algoritmo que solicite ao usu�rio um n�mero inteiro maior que zero
	e s� saia da rotina quando o usu�rio digitar o valor 0 (zero)
	caso o usu�rio n�o digite o valor zero (0) o algoritmo dever� solicitar 
	a entrada de um novo n�mero.
	
	Ap�s o usu�rio digitar o valor zero (0)o algoritmo dever� imprimir 
	a quantidade de n�meros que foram digitados e a m�dia destes n�meros.
	
	*/
	
	double quantidadeNumeros, numero, soma; 
	
	soma = 0;
	quantidadeNumeros = 0;
	
	cout << "Digite um n�mero inteiro: \n";
	cin >> numero;
	
	while ( numero > 0 ){
		
		quantidadeNumeros++;
		soma = soma + numero;
		
		cout << "Digite um n�mero inteiro: \n";
		cin >> numero;
		
			
	} 
	
	
	cout << "\nA quantidade de n�meros digitado pelo usu�rio foi: " << quantidadeNumeros << "\n";
	cout << "A m�dia dos n�meros digitados foi " << soma / quantidadeNumeros << "\n";
	
	
	
	system ("pause");
	return 0;
	
}
