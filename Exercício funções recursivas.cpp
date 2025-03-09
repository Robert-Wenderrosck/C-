#include <iostream>
#include <locale.h>

using namespace std;

int somarNumeros(int numeroRecebido);


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exercício de Recursividade
		Crie um algoritmo usando Recursividade que solicite ao usuário
		que digite um número e em seguida, calcule a somatória do 1 ao número
		que o usuário digitou.
	
	Ex.: Se digitar 5: 1 + 2 + 3 + 4 + 5 = 15
		
	*/
	
	int numero, somatorio; 
	
	cout << "Digite o número: ";
	cin >> numero;
	
	somatorio = somarNumeros(numero);
	
	cout << "A soma dos números de 1 até " << numero << " é " << somatorio << "\n";
	
	system ("pause");
	return 0;
}

int somarNumeros(int numeroRecebido){
	
	int resultado;
	
	if (numeroRecebido == 1){
		
		return (1);
		
	}else{
		
		resultado = numeroRecebido + somarNumeros (numeroRecebido - 1);	
		
	}

	return (resultado);
		
}
