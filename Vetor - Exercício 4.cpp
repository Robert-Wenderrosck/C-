#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exercício
		Crie um algoritmo que contenha um vetor de 5 números inteiros,
		depois solicite ao usuário a entrada desses números e no final 
		mostre quantos números possuem valor maior, menor e igual a primeiro número do vetor.
		
	*/
	
	int contador, vetorNumeros[5];
	int maior, menor, igual;
	
	maior = 0;
	menor = 0;
	igual = 0;	
	
	for ( contador = 0; contador < 5; contador++){
		
		cout << "Digite o número da posição " << contador << ": ";
		cin >> vetorNumeros[contador];
		
	}
	
	for ( contador = 0; contador < 5; contador++){
		
		if (vetorNumeros[contador] > vetorNumeros[0]){
			
			maior++; 
			
		}else if (vetorNumeros[contador] < vetorNumeros[0]){
			
			menor--;
			
		}else if ( vetorNumeros[contador + 1] == vetorNumeros[0] ){ //Tem que somar 1 à posição 0 para não contar o primeiro na hora de fazer a referência (O primeiro é a referência)
			
			igual++;
			
		}else{
			
		}
	
				
	}

	
	cout << "\n\nQuantidade de números maiores que " << vetorNumeros[0] << ":" << maior << "\n";
	cout << "Quantidade de números menores que " << vetorNumeros[0] << ":" << menor << "\n";
	cout << "Quantidade de números iguais ao número " << vetorNumeros[0] << ":" << igual << "\n";
	
	system ("pause");
	return 0;
}
