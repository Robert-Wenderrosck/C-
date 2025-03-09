#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exercício
	Crie um algoritmo que solicite ao usuário um número inteiro 
	e depois imprima na tela se este número é positivo ou negativo.
	*/
	
	int numero;
	
	cout << "Digite um número inteiro: \n";
	cin >> numero;
	
	if (numero > 0){
		
		cout << "\nO número " << numero << " é positivo!\n\n";
		
		
	}else if (numero < 0){
	
		
		cout << "\nO número " << numero << " é negativo!\n\n"; 
		
	}else{
	
		
		cout << "O número " << numero << " NÃO possui sinal!\n\n";
		
	}
	
	
	
	
	
	
	system ("pause");
	return 0;
	
}
