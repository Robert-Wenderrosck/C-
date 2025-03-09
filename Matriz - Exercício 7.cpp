#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exercício	
		Crie uma matriz 3x3 e solicite ao usuário que ele preencha os números e em seguida, 
		conte e imprima quantos números maiores que 5 foram digitados na matriz.
		
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
	cout << qtdNumerosMaiores5 << " números digitados na matriz foram maiores que 5.\n\n";
	
	
	system ("pause");
	return 0;
	
}
