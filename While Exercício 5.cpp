#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exercício
		Solicite que o usuário digite um número inteiro e imprima na sequencia 
		o quadrado do número digitado pelo usuário. Repita isso até o que número digitado seja 0 use o While.
		
	*/
	
	int numero;
	
	cout << "Digite um número inteiro positivo (digite 0 para encerrar): \n";
	cin >> numero;
	
	while ( numero != 0 ){
		
		cout << "O quadrado do número digitado é: " << numero * numero << "\n";
		cout << "\nDigite um número inteiro positivo (digite 0 para encerrar): \n";
		cin >> numero;
		
			
		}	

	
	
	system ("pause");
	return 0;
}
