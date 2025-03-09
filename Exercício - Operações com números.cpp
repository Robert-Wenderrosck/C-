#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "POrtuguese");
	
	/* Exercício
	Crie um algoritmo que solicite ao usuário 3 números inteiros e depois calcule e apresnete na tela: 
		1) O dobro do primeiro número mais a metade do segundo número
		2) O triplo do número primeiro mais o terceiro número
		3) O terceiro número multiplicado por 2
	*/
	
	int numero1, numero2, numero3;
	int resultado1, resultado2, resultado3;
	
	
	cout << "Digite o primeiro número: \n";
	cin >> numero1;
	
	cout << "\nDigite o segundo número: \n";
	cin >> numero2;
	
	cout << "\nDigite o terceiro número: \n";
	cin >> numero3;
	
	resultado1 = (numero1 *2) + (numero2 /2);
	
	resultado2 = (numero1 *3) + numero3;
	
	resultado3 = (numero3 *2);
	
	cout << "\n\n--------------------------------------\n";
	cout << "\nO resultado da primeira operação é: \n" << resultado1;
	cout << "\nO resultado da segunda operação é: \n" << resultado2;
	cout << "\nO resultado da terceira operação é: \n" << resultado3 << "\n\n";
	
	
	system ("pause");
	return 0;
	
}
