#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exercício
		Crie um algoritmo que contenha um vetor de 5 números inteiros 
		depois solicite ao usuário que digite os 5 números 
		em seguida imprima os números na ordem inversa em que foram digitados.
		
	*/
	
	int numero[5];
	int contador;
	
	//Coletando números no vetor
	for ( contador = 0; contador < 5; contador++){
		
		cout << "Digite o número da posição: " << contador << ": ";
		cin >> numero[contador];	
	}
	
	//Imprimindo os números na ordem inversa
	for (  contador = 4; contador >= 0; contador-- ){
		
		cout << numero[contador] << "\n";
		
	}
	
	system ("pause");
	return 0;	
}
