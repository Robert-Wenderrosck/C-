#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "POrtuguese");
	
	/* Exerc�cio
	Crie um algoritmo que solicite ao usu�rio 3 n�meros inteiros e depois calcule e apresnete na tela: 
		1) O dobro do primeiro n�mero mais a metade do segundo n�mero
		2) O triplo do n�mero primeiro mais o terceiro n�mero
		3) O terceiro n�mero multiplicado por 2
	*/
	
	int numero1, numero2, numero3;
	int resultado1, resultado2, resultado3;
	
	
	cout << "Digite o primeiro n�mero: \n";
	cin >> numero1;
	
	cout << "\nDigite o segundo n�mero: \n";
	cin >> numero2;
	
	cout << "\nDigite o terceiro n�mero: \n";
	cin >> numero3;
	
	resultado1 = (numero1 *2) + (numero2 /2);
	
	resultado2 = (numero1 *3) + numero3;
	
	resultado3 = (numero3 *2);
	
	cout << "\n\n--------------------------------------\n";
	cout << "\nO resultado da primeira opera��o �: \n" << resultado1;
	cout << "\nO resultado da segunda opera��o �: \n" << resultado2;
	cout << "\nO resultado da terceira opera��o �: \n" << resultado3 << "\n\n";
	
	
	system ("pause");
	return 0;
	
}
