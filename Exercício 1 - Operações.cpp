#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	/*Exercício
	Crie um algoritmo que solicite ao usuário a entrada de dois números 
	e a operação que ele deseja executar (Soma, Subtração, Divisão e Multiplicação).
	Logo em seguida, o algoritmo deve ler os dois números,
	a operação e apresentar na tela o resultado.
	*/
	
	double numero1, numero2;
	int operacaoEscolhida;
	double resultado;
	
	cout << "Digite um número: \n";
	cin >> numero1;
	
	cout << "Digite outro número: \n";
	cin >> numero2;
	
	cout << "Digite o n° da operação que deseja realizar entre os dois números inseridos: \n";
	cout << "1 - Soma" << "\n";
	cout << "2 - Subtração" << "\n";
	cout << "3 - Divisão" << "\n";
	cout << "4 - Multiplicação" << "\n";
	cin >> operacaoEscolhida;
	
	switch ( operacaoEscolhida ){
		
		case 1:
			
			resultado = (numero1 + numero2);
			cout << "O resultado da operação realizada entre os dois números é: " << resultado << "\n\n";
			break;
			
		case 2 :
			
			resultado = (numero1 - numero2);
			cout << "O resultado da operação realizada entre os dois números é: " << resultado << "\n\n";
			break;
			
		case 3: 
			
			resultado = (numero1 / numero2);
			cout << "O resultado da operação realizada entre os dois números é: " << resultado << "\n\n";
			break;
			
		case 4: 
		
			resultado = (numero1 * numero2);
			cout << "O resultado da operação realizada entre os dois números é: " << resultado << "\n\n";
			break;
			
		default: 
		
			cout << "Operação inválida!\n\n";
			break;
			
		
	}
	
	system ("pause");
	return 0;
	
}
