#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exerc�cio
		Solicite que o usu�rio digite um n�mero inteiro e imprima na sequencia 
		o quadrado do n�mero digitado pelo usu�rio. Repita isso at� o que n�mero digitado seja 0 use o While.
		
	*/
	
	int numero;
	
	cout << "Digite um n�mero inteiro positivo (digite 0 para encerrar): \n";
	cin >> numero;
	
	while ( numero != 0 ){
		
		cout << "O quadrado do n�mero digitado �: " << numero * numero << "\n";
		cout << "\nDigite um n�mero inteiro positivo (digite 0 para encerrar): \n";
		cin >> numero;
		
			
		}	

	
	
	system ("pause");
	return 0;
}
