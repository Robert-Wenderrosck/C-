#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exercício
		Crie uma matriz 3x3 e solicite que o usuário digite os números.
		Em seguida, exiba a soma dos valores da matriz na diagonal.
		
	*/
	
	int linha, coluna, somaDiagonal, numeroDigitado[3][3];
	
	somaDiagonal = 0;
	linha = 0;
	coluna = 0;
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for (coluna = 0; coluna < 3; coluna++){
			
			cout << "Digite o valor da Linha " << linha << " - " << "Coluna " << coluna << ":";
			cin >> numeroDigitado [linha][coluna];
			
		}
		
	}
	
	for ( linha = 0; linha < 3; linha++ ){
		
		for (coluna = 0; coluna < 3; coluna++){
			
			cout << numeroDigitado [linha][coluna] << " ";
			
		}
		
		cout << "\n";
		
	}
	
	somaDiagonal =	numeroDigitado[0][0] + numeroDigitado[1][1] + numeroDigitado[2][2];
	
	cout << "A soma dos valores da diagonal da Matriz é: " << somaDiagonal << "\n\n";
	
		
	system ("pause");
	return 0;	
}
