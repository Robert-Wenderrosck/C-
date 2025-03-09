#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exercício 
	Crie um algoritmo que solicite ao usuário um número inteiro maior que zero
	e só saia da rotina quando o usuário digitar o valor 0 (zero)
	caso o usuário não digite o valor zero (0) o algoritmo deverá solicitar 
	a entrada de um novo número.
	
	Após o usuário digitar o valor zero (0)o algoritmo deverá imprimir 
	a quantidade de números que foram digitados e a média destes números.
	
	*/
	
	double quantidadeNumeros, numero, soma; 
	
	soma = 0;
	quantidadeNumeros = 0;
	
	cout << "Digite um número inteiro: \n";
	cin >> numero;
	
	while ( numero > 0 ){
		
		quantidadeNumeros++;
		soma = soma + numero;
		
		cout << "Digite um número inteiro: \n";
		cin >> numero;
		
			
	} 
	
	
	cout << "\nA quantidade de números digitado pelo usuário foi: " << quantidadeNumeros << "\n";
	cout << "A média dos números digitados foi " << soma / quantidadeNumeros << "\n";
	
	
	
	system ("pause");
	return 0;
	
}
