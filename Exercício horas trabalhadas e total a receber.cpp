#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exerc�cio - Total a Receber M�s
	Crie um algoritmo que solicite ao usu�rio o valor que ele ganha por hora
	e o n�mero de horas que ele trabalhou durante o m�s. Depois calcule e mostre 
	na tela o total que ele tem a receber naquele m�s. 
	*/
	
	double valor;
	double numeroHoras;
	double totalReceber;
	
	cout << "\nDigite o valor recebido por hora trabalhada: \n";
	cin >> valor;
	
	cout << "\nDigite o n�mero de horas trabalhadas durante o m�s: \n";
	cin >> numeroHoras;
	
	totalReceber = (valor * numeroHoras);
	
	cout << "\nO total a ser recebido no m�s �: " << totalReceber << "\n\n";
	
	
	system("pause");
	
	return 0;
	
}
