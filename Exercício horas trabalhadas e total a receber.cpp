#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exercício - Total a Receber Mês
	Crie um algoritmo que solicite ao usuário o valor que ele ganha por hora
	e o número de horas que ele trabalhou durante o mês. Depois calcule e mostre 
	na tela o total que ele tem a receber naquele mês. 
	*/
	
	double valor;
	double numeroHoras;
	double totalReceber;
	
	cout << "\nDigite o valor recebido por hora trabalhada: \n";
	cin >> valor;
	
	cout << "\nDigite o número de horas trabalhadas durante o mês: \n";
	cin >> numeroHoras;
	
	totalReceber = (valor * numeroHoras);
	
	cout << "\nO total a ser recebido no mês é: " << totalReceber << "\n\n";
	
	
	system("pause");
	
	return 0;
	
}
