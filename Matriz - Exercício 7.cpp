#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exerc�cio	
		Crie uma matriz 3x3 e solicite ao usu�rio que ele preencha os n�meros e em seguida, 
		conte e imprima quantos n�meros maiores que 5 foram digitados na matriz.
		
	*/ 
	
	int linha, coluna, matriz[3][3];
	int qtdNumerosMaiores5;
	
	qtdNumerosMaiores5 = 0;
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for ( coluna = 0; coluna < 3; coluna++ ){
			
			cout << "Digite o valor da Linha " << linha << " - Coluna " << coluna << ": ";
			cin >> matriz [linha][coluna];	
			
			if ( matriz [linha][coluna] > 5 ){
				qtdNumerosMaiores5++;
			}else{
			}
			
		}
		
	}
	
	cout << "\nMatriz 3x3 formada: \n";
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for ( coluna = 0; coluna < 3; coluna++ ){
			
			cout << matriz [linha][coluna] << "  ";	
			
		}
		
		cout << "\n";
	}
	
	cout << "\n---------------------------------------\n";
	cout << qtdNumerosMaiores5 << " n�meros digitados na matriz foram maiores que 5.\n\n";
	
	
	system ("pause");
	return 0;
	
}
