#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exerc�cio Enum
		Crie um algoritmo usando o enum que armazene as letras do alfabeto de A a K
		e ap�s isso use um for para imprimir os n�meros de 0 a 10 usando o enum.
	*/
	
	enum Letras{A, B, C, D, E, F, G, H, I, J, K};
	
	Letras letraSelecionada;
	
	int contador;
	for ( contador=A; contador<=K; contador++ ){
		
		cout << contador << "\n"; 
		
	} 
	
	system ("pause");
	return 0;	
}
