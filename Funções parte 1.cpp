#include <iostream>
#include <locale.h>

using namespace std;

//Precisamos prototipar as fun��es para que elas funcionem, ou seja, precisamos apresentar a fun��o para o programa
//Void = Tipo de retorno + Nome da fun��o e os argumentos
void funcaoMensagem();

void somarNumeros(int numero1, int numero2);

int somarTresNumeros(int numero1, int numero2, int numero3);



int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	funcaoMensagem();
	
	somarNumeros(12, 20);
	
	int n1, n2, n3, soma;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> n1;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> n2;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> n3;
	
	soma = somarTresNumeros(n1, n2, n3);
	
	cout << "\n\nTotal soma 3 n�meros: " << soma << "\n";
	
	system ("pause");
	return 0;	
}

int somarTresNumeros(int numero1, int numero2, int numero3){
	
	return numero1 + numero2 + numero3;
}

void somarNumeros(int numero1, int numero2){
	
	cout << "N�mero 1: " << numero1 << "\n";
	cout << "N�mero 2: " << numero2 << "\n";
	cout << "Total: " << numero1 + numero2 << "\n";
}

void funcaoMensagem(){
	
	cout << "Curso de L�gica de Programa��o!\n\n";
	
}
