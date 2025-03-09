#include<iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exercício
		Crie uma matriz 3x3 e solicite ao usuário que ele preencha os números 
		e em seguida multiplique cada número por 2 
		por último, imprima a amtriz original e a matriz com valores multiplicados por 2.
		
	*/
	
	int linha, coluna, matriz[3][3];
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for ( coluna = 0; coluna < 3; coluna++ ){
			
			cout << "Digite o valor da Linha " << linha << " - Coluna " << coluna << ": ";
			cin >> matriz[linha][coluna];
			
		}
		
	}
	
	cout << "\nMatriz 3x3 com os valores digitados: \n";
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for ( coluna = 0; coluna < 3; coluna++ ){
			
			cout << matriz[linha][coluna] << " ";
			
		}

	cout << "\n";
			
	}
	
	cout << "\nMatriz 3x3 com os valores digitados multiplicados por 2: \n";
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for ( coluna = 0; coluna < 3; coluna++ ){
			
			cout << matriz[linha][coluna] * 2 << " ";
			
		}

	cout << "\n";
			
	}
	
	system ("pause");
	return 0;
}
