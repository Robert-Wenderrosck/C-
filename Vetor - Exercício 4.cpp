#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exerc�cio
		Crie um algoritmo que contenha um vetor de 5 n�meros inteiros,
		depois solicite ao usu�rio a entrada desses n�meros e no final 
		mostre quantos n�meros possuem valor maior, menor e igual a primeiro n�mero do vetor.
		
	*/
	
	int contador, vetorNumeros[5];
	int maior, menor, igual;
	
	maior = 0;
	menor = 0;
	igual = 0;	
	
	for ( contador = 0; contador < 5; contador++){
		
		cout << "Digite o n�mero da posi��o " << contador << ": ";
		cin >> vetorNumeros[contador];
		
	}
	
	for ( contador = 0; contador < 5; contador++){
		
		if (vetorNumeros[contador] > vetorNumeros[0]){
			
			maior++; 
			
		}else if (vetorNumeros[contador] < vetorNumeros[0]){
			
			menor--;
			
		}else if ( vetorNumeros[contador + 1] == vetorNumeros[0] ){ //Tem que somar 1 � posi��o 0 para n�o contar o primeiro na hora de fazer a refer�ncia (O primeiro � a refer�ncia)
			
			igual++;
			
		}else{
			
		}
	
				
	}

	
	cout << "\n\nQuantidade de n�meros maiores que " << vetorNumeros[0] << ":" << maior << "\n";
	cout << "Quantidade de n�meros menores que " << vetorNumeros[0] << ":" << menor << "\n";
	cout << "Quantidade de n�meros iguais ao n�mero " << vetorNumeros[0] << ":" << igual << "\n";
	
	system ("pause");
	return 0;
}
