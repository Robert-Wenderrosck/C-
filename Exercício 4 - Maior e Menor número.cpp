#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exerc�cio
	Crie um algoritmo que solicite ao usu�rio a entrada de tr�s n�meros e depois
	imprima na tela o maior n�mero e o menor n�mero digitado por ele.
	*/
	
	int numero1, numero2, numero3;
	
	cout << "\nDigite o primeiro n�mero: \n";
	cin >> numero1;
	
	cout << "\nDigite o segundo n�mero: \n\n";
	cin >> numero2;
	
	cout << "\nDigite o terceiro n�mero: \n\n";
	cin >> numero3;
	
	if ( numero3 > numero1 && numero3 > numero2){
		
		cout << "\nO maior n�mero digitado foi o n�mero: \n" << numero3;
		
	}else if (numero2 > numero1 && numero2 > numero3 ){
	
		cout << "\nO maior n�mero digitado foi o n�mero: \n" << numero2;
	
	}else {
		
		cout << "\nO maior n�mero digitado foi o n�mero: \n" << numero1;
		
	}
	
	if ( numero3 < numero1 && numero3 < numero2){
		
		cout << "\nO menor n�mero digitado foi o n�mero: \n" << numero3 << "\n";
		
	}else if (numero2 < numero1 && numero2 < numero3 ){
	
		cout << "\nO menor n�mero digitado foi o n�mero: \n" << numero2 << "\n";
	
	}else {
		
		cout << "\nO menor n�mero digitado foi o n�mero: \n" << numero1 << "\n";
	
	}
	
	system ("pause");
	return 0;
	
}
