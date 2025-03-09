#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exercício
	Crie um algoritmo que solicite ao usuário a entrada de três números e depois
	imprima na tela o maior número e o menor número digitado por ele.
	*/
	
	int numero1, numero2, numero3;
	
	cout << "\nDigite o primeiro número: \n";
	cin >> numero1;
	
	cout << "\nDigite o segundo número: \n\n";
	cin >> numero2;
	
	cout << "\nDigite o terceiro número: \n\n";
	cin >> numero3;
	
	if ( numero3 > numero1 && numero3 > numero2){
		
		cout << "\nO maior número digitado foi o número: \n" << numero3;
		
	}else if (numero2 > numero1 && numero2 > numero3 ){
	
		cout << "\nO maior número digitado foi o número: \n" << numero2;
	
	}else {
		
		cout << "\nO maior número digitado foi o número: \n" << numero1;
		
	}
	
	if ( numero3 < numero1 && numero3 < numero2){
		
		cout << "\nO menor número digitado foi o número: \n" << numero3 << "\n";
		
	}else if (numero2 < numero1 && numero2 < numero3 ){
	
		cout << "\nO menor número digitado foi o número: \n" << numero2 << "\n";
	
	}else {
		
		cout << "\nO menor número digitado foi o número: \n" << numero1 << "\n";
	
	}
	
	system ("pause");
	return 0;
	
}
