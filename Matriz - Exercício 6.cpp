#include<iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exerc�cio
		Crie uma matriz 3x3 e solicite ao usu�rio que ele preencha os n�meros 
		e em seguida multiplique cada n�mero por 2 
		por �ltimo, imprima a amtriz original e a matriz com valores multiplicados por 2.
		
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
