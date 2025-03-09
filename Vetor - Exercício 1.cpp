#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exerc�cio
		Crie um algoritmo que contenha um vetor de 5 n�meros inteiros 
		depois solicite ao usu�rio que digite os 5 n�meros 
		em seguida imprima os n�meros na ordem inversa em que foram digitados.
		
	*/
	
	int numero[5];
	int contador;
	
	//Coletando n�meros no vetor
	for ( contador = 0; contador < 5; contador++){
		
		cout << "Digite o n�mero da posi��o: " << contador << ": ";
		cin >> numero[contador];	
	}
	
	//Imprimindo os n�meros na ordem inversa
	for (  contador = 4; contador >= 0; contador-- ){
		
		cout << numero[contador] << "\n";
		
	}
	
	system ("pause");
	return 0;	
}
