#include <iostream>
#include <locale.h>

using namespace std;

//Precisamos prototipar as funções para que elas funcionem, ou seja, precisamos apresentar a função para o programa
//Void = Tipo de retorno + Nome da função e os argumentos
void funcaoMensagem();

void somarNumeros(int numero1, int numero2);

int somarTresNumeros(int numero1, int numero2, int numero3);



int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	funcaoMensagem();
	
	somarNumeros(12, 20);
	
	int n1, n2, n3, soma;
	
	cout << "Digite o primeiro número: ";
	cin >> n1;
	
	cout << "Digite o primeiro número: ";
	cin >> n2;
	
	cout << "Digite o primeiro número: ";
	cin >> n3;
	
	soma = somarTresNumeros(n1, n2, n3);
	
	cout << "\n\nTotal soma 3 números: " << soma << "\n";
	
	system ("pause");
	return 0;	
}

int somarTresNumeros(int numero1, int numero2, int numero3){
	
	return numero1 + numero2 + numero3;
}

void somarNumeros(int numero1, int numero2){
	
	cout << "Número 1: " << numero1 << "\n";
	cout << "Número 2: " << numero2 << "\n";
	cout << "Total: " << numero1 + numero2 << "\n";
}

void funcaoMensagem(){
	
	cout << "Curso de Lógica de Programação!\n\n";
	
}
