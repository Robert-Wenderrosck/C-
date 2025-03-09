#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string matriz [2][3];
	int linha, coluna;
	
	matriz [0][0] = "A";
	matriz [0][1] = "B";
	matriz [0][2] = "C";
	matriz [1][0] = "D";
	matriz [1][1] = "E";
	matriz [1][2] = "F";
	
	cout << "--------- Vetor Letras ---------\n";
	for ( linha = 0; linha < 2; linha++ ){
		
		for ( coluna = 0; coluna < 3; coluna++ ){
			
			cout << matriz[linha][coluna] << " ";
			
		}
		
		cout << "\n";
		
	}
	
	//----------------------------------------
	
	int matrizInteiros [2][3];
	int linhaInteiros, colunaInteiros;
	
	matrizInteiros [0][0] = 1;
	matrizInteiros [0][1] = 2;
	matrizInteiros [0][2] = 3;
	matrizInteiros [1][0] = 4;
	matrizInteiros [1][1] = 5;
	matrizInteiros [1][2] = 6;
	
	cout << "--------- Vetor Números ---------\n";
	for ( linhaInteiros = 0; linhaInteiros < 2; linhaInteiros++ ){
		
		for ( colunaInteiros = 0; colunaInteiros < 3; colunaInteiros++ ){
			
			cout << matrizInteiros[linhaInteiros][colunaInteiros] << " ";
			
		}
		
		cout << "\n";
		
	}
	
	//--------------------------------------------
	
	int matrizPreenchimentoAutomatico [10][8];
	int linhaPreenchimentoAutomatico, colunaPreenchimentoAutomatico;
	
	for ( linhaPreenchimentoAutomatico = 0; linhaPreenchimentoAutomatico < 10; linhaPreenchimentoAutomatico++ ){
		
		for ( colunaPreenchimentoAutomatico = 0; colunaPreenchimentoAutomatico < 8; colunaPreenchimentoAutomatico++ ){
			
			matrizPreenchimentoAutomatico[linhaPreenchimentoAutomatico][colunaPreenchimentoAutomatico] = colunaPreenchimentoAutomatico;
			
		}
		
		cout << "\n";
		
	}
	
	cout << "\n\nImprimindo Matriz Automática\n";
	
	for ( linhaPreenchimentoAutomatico = 0; linhaPreenchimentoAutomatico < 10; linhaPreenchimentoAutomatico++ ){
		
		for ( colunaPreenchimentoAutomatico = 0; colunaPreenchimentoAutomatico < 8; colunaPreenchimentoAutomatico++ ){
			
			cout << matrizPreenchimentoAutomatico[linhaPreenchimentoAutomatico][colunaPreenchimentoAutomatico] << " ";
			
		}
		
		cout << "\n";
		
	}
	
	system ("pause");
	return 0;
	
}
