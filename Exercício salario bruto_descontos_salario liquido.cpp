#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exerc�cio 
		Crie um algoritmo que solicite ao usu�rio o valor que ele ganha por hora e o n�mero de horas que ele trabalhou durante o m�s.
		Depois calcule e mostre na tela o total que ele tem a receber naquele m�s.
		E tamb�m efetue os seguintes descontos:
		
		1) 11% para o Importo de Renda, 
		2) 8% para o INSS
		3) 5% para o sindicato
		
		Fa�a o c�lculo e imprima o resultado conforme mostrado abaixo:
			+ Sal�rio Bruto: R$
			- IR (11%) : R$
			- INSS (8%) : R$ 
			- Sindicato (5%) : R$
			= Sal�rio L�quido: R$
			Obs.: Sal�rio Bruto - Descontos = Sal�rio L�quido.
			
	*/
	
	double ganhoPorHora, horasTrabalhadas;
	double salarioBruto, salarioLiquido;
	double impostoRenda, inss, sindicato;	
	
	cout << "Digite o valor ganho por hora trabalhada: \n";
	cin >> ganhoPorHora;
	
	cout << "Digite o n�mero de horas trabalhadas no m�s: \n\n";
	cin >> horasTrabalhadas;
	
	
	salarioBruto = (ganhoPorHora * horasTrabalhadas);
	
	impostoRenda = (11*salarioBruto)/100;
	
	inss = (8*salarioBruto)/100;
	
	sindicato = (5*salarioBruto)/100;
	
	salarioLiquido = (salarioBruto - impostoRenda - inss - sindicato);
	
	cout << "\n----------------------------------\n";
	cout << "+ Sal�rio Bruto: R$ " << salarioBruto << "\n";
	cout << "- IR (11%) : R$ " << impostoRenda << "\n";
	cout << "- INSS (8%) : R$ " << inss << "\n";
	cout << "- Sindicato (5%) : R$ " << sindicato << "\n";
	cout << "= Sal�rio L�quido: R$ " << salarioLiquido << "\n\n";
	
	
	system ("pause");
	return 0;
}
