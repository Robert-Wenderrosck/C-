#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exercício
		Crie um algoritmo que contenha um vetor de 5 valores inteiros
		depois solicite ao usuário que digite os 5 números para preencher esse vetor
		em seguida, exiba na tela os valores ímpares desse vetor.
	*/
	
	int vetorNumerosImpares[5], vetorPrincipal[5];
	int contador, posicao;
	
	for ( posicao = 0; posicao < 5; posicao++ ){
		
		//Preenchendo os números no vetor principal
		cout << "Digite o número da posição " << posicao << ": ";
		cin >> vetorPrincipal[posicao];
		
		//Verifica se o número é ímpar e se for armazena no vetor vetorNumerosImpares
		if ( vetorPrincipal[posicao] % 2 != 0 ){
			
			vetorNumerosImpares[contador] =	vetorPrincipal[posicao];
			contador++;
			
		}
		
		
	}
	
	cout << "\n\nOs números ímpares são: \n";
	cout << "Total ímpares: = " << contador << "\n";
	
	//Imprime os números do vetor vetorNumerosImpares
	for ( posicao = 0; posicao < contador; posicao++ ){
		
		cout << vetorNumerosImpares[posicao] << "\n";
		
	}	

	
	
	system ("pause");
	return 0;
	
}
