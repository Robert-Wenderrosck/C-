#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exercício 
		Crie um algoritmo que solicite ao usuário o valor que ele ganha por hora e o número de horas que ele trabalhou durante o mês.
		Depois calcule e mostre na tela o total que ele tem a receber naquele mês.
		E também efetue os seguintes descontos:
		
		1) 11% para o Importo de Renda, 
		2) 8% para o INSS
		3) 5% para o sindicato
		
		Faça o cálculo e imprima o resultado conforme mostrado abaixo:
			+ Salário Bruto: R$
			- IR (11%) : R$
			- INSS (8%) : R$ 
			- Sindicato (5%) : R$
			= Salário Líquido: R$
			Obs.: Salário Bruto - Descontos = Salário Líquido.
			
	*/
	
	double ganhoPorHora, horasTrabalhadas;
	double salarioBruto, salarioLiquido;
	double impostoRenda, inss, sindicato;	
	
	cout << "Digite o valor ganho por hora trabalhada: \n";
	cin >> ganhoPorHora;
	
	cout << "Digite o número de horas trabalhadas no mês: \n\n";
	cin >> horasTrabalhadas;
	
	
	salarioBruto = (ganhoPorHora * horasTrabalhadas);
	
	impostoRenda = (11*salarioBruto)/100;
	
	inss = (8*salarioBruto)/100;
	
	sindicato = (5*salarioBruto)/100;
	
	salarioLiquido = (salarioBruto - impostoRenda - inss - sindicato);
	
	cout << "\n----------------------------------\n";
	cout << "+ Salário Bruto: R$ " << salarioBruto << "\n";
	cout << "- IR (11%) : R$ " << impostoRenda << "\n";
	cout << "- INSS (8%) : R$ " << inss << "\n";
	cout << "- Sindicato (5%) : R$ " << sindicato << "\n";
	cout << "= Salário Líquido: R$ " << salarioLiquido << "\n\n";
	
	
	system ("pause");
	return 0;
}
