#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exercício
		Crie um algoritmo que leia uma matriz de 2 x 2
		usando um comando for e multiplique os elementos por 2 e imprime o resultado.
		
	*/
	
	int linha, coluna, matriz[2][2];
	
	//Preenchendo os valores da matriz
	for ( linha = 0; linha <2; linha++ ){ //percorre as colunas
		
		for ( coluna = 0; coluna < 2; coluna++ ){
			
			cout << "Digite o número da Linha " << linha << " - Coluna: " << coluna << ": ";
			cin >> matriz[linha][coluna]; //Armazena o número na posição correta
			
		}
		
		
	}
	
	cout << "\n\nNúmeros digitados: \n";
	
	//Imprimindo os valores da Matriz
	for ( linha = 0; linha <2; linha++ ){
		
		for ( coluna = 0; coluna < 2; coluna++ ){
			
			cout << matriz[linha][coluna] << "  ";
			
		}
		
		cout << "\n";
		
	}
	
	//Multiplicar por 2 os valores
	for ( linha = 0; linha <2; linha++ ){
		
		for ( coluna = 0; coluna < 2; coluna++ ){
			
			matriz[linha][coluna] = matriz[linha][coluna] * 2;
			
		}
			
	} 
	
	cout << "\n\nNúmeros multiplicados por 2\n";
	
	//Imprimindo os valores da Matriz multiplicados por 2
	for ( linha = 0; linha <2; linha++ ){
		
		for ( coluna = 0; coluna < 2; coluna++ ){
			
			cout << matriz[linha][coluna] << "  ";
			
		}
		
		cout << "\n";
		
	}
		
	
	system ("pause");
	return 0;
	
}
