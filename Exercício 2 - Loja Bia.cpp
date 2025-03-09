#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exerc�cio
	A loja da Bia oferece aos seus funcion�rios um desconto de 10% no tatal da compra.
	A loja da Bia para fidelizar seus clientes, oferece para os clientes VIP 5% de desconto no tatal da compra.
	
	Com esses dados, crie um algoritmo que calcule o valor total a ser pago respeitando os descontos oferecidos pela loja.
	
	O algoritmo na hora da venda, dever� solicitar a entrada total da compra e um c�digo que identifique se o comprador �
	1-Cliente Comum
	2- Funcion�rio
	3- Cliente VIP
	*/
	
	double valorCompra, totalPagar;
	int codigo;
	
	cout << "Digite o total da compra sem desconto: \n";
	cin >> valorCompra;
	
	cout << "Digite o c�digo: \n";
	cout << "Digite 1 - Cliente comum (0% desconto)\n";
	cout << "Digite 2 - Funcion�rio (10% desconto)\n";
	cout << "Digite 3 - Cliente VIP (5% desconto)\n";
	cin >> codigo;
	
	switch (codigo){
		
	case 1 :
		
		cout << "\nCliente comum - 0% de desconto.\n";
		cout << "Total a pagar: " << valorCompra << " reais \n";
		break;
		
	case 2: 
		
		totalPagar = valorCompra - (valorCompra * 0.1);
		cout << "\nFuncion�rio - 10% de desconto.\n";
		cout << "Total a pagar: " << totalPagar << " reais \n";
		break;
		
	case 3:
		
		totalPagar = valorCompra - (valorCompra * 0.05);
		cout << "\nCliente VIP - 5% de desconto.\n";
		cout << "Total a pagar: " << totalPagar << " reais \n";
		break;
		
	default:
	
		cout << "Op��o inv�lida!\n\n";	
		break;
		
	}
	
	
	system ("pause");
	return 0;
	
}
