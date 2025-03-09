#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exerc�cio
		Crie um algoritmo que contenha um vetor de 5 valores inteiros
		depois solicite ao usu�rio que digite os 5 n�meros para preencher esse vetor
		em seguida, exiba na tela os valores �mpares desse vetor.
	*/
	
	int vetorNumerosImpares[5], vetorPrincipal[5];
	int contador, posicao;
	
	for ( posicao = 0; posicao < 5; posicao++ ){
		
		//Preenchendo os n�meros no vetor principal
		cout << "Digite o n�mero da posi��o " << posicao << ": ";
		cin >> vetorPrincipal[posicao];
		
		//Verifica se o n�mero � �mpar e se for armazena no vetor vetorNumerosImpares
		if ( vetorPrincipal[posicao] % 2 != 0 ){
			
			vetorNumerosImpares[contador] =	vetorPrincipal[posicao];
			contador++;
			
		}
		
		
	}
	
	cout << "\n\nOs n�meros �mpares s�o: \n";
	cout << "Total �mpares: = " << contador << "\n";
	
	//Imprime os n�meros do vetor vetorNumerosImpares
	for ( posicao = 0; posicao < contador; posicao++ ){
		
		cout << vetorNumerosImpares[posicao] << "\n";
		
	}	

	
	
	system ("pause");
	return 0;
	
}
