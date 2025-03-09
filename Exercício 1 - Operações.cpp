#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	/*Exerc�cio
	Crie um algoritmo que solicite ao usu�rio a entrada de dois n�meros 
	e a opera��o que ele deseja executar (Soma, Subtra��o, Divis�o e Multiplica��o).
	Logo em seguida, o algoritmo deve ler os dois n�meros,
	a opera��o e apresentar na tela o resultado.
	*/
	
	double numero1, numero2;
	int operacaoEscolhida;
	double resultado;
	
	cout << "Digite um n�mero: \n";
	cin >> numero1;
	
	cout << "Digite outro n�mero: \n";
	cin >> numero2;
	
	cout << "Digite o n� da opera��o que deseja realizar entre os dois n�meros inseridos: \n";
	cout << "1 - Soma" << "\n";
	cout << "2 - Subtra��o" << "\n";
	cout << "3 - Divis�o" << "\n";
	cout << "4 - Multiplica��o" << "\n";
	cin >> operacaoEscolhida;
	
	switch ( operacaoEscolhida ){
		
		case 1:
			
			resultado = (numero1 + numero2);
			cout << "O resultado da opera��o realizada entre os dois n�meros �: " << resultado << "\n\n";
			break;
			
		case 2 :
			
			resultado = (numero1 - numero2);
			cout << "O resultado da opera��o realizada entre os dois n�meros �: " << resultado << "\n\n";
			break;
			
		case 3: 
			
			resultado = (numero1 / numero2);
			cout << "O resultado da opera��o realizada entre os dois n�meros �: " << resultado << "\n\n";
			break;
			
		case 4: 
		
			resultado = (numero1 * numero2);
			cout << "O resultado da opera��o realizada entre os dois n�meros �: " << resultado << "\n\n";
			break;
			
		default: 
		
			cout << "Opera��o inv�lida!\n\n";
			break;
			
		
	}
	
	system ("pause");
	return 0;
	
}
