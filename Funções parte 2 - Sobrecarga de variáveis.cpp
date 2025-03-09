#include <iostream>
#include <locale.h>

using namespace std;

//Precisamos prototipar as funções para que elas funcionem, ou seja, precisamos apresentar a função para o programa
//Void = Tipo de retorno + Nome da função e os argumentos
void somaNumeros(int numero1, int numero2);
void somaNumeros (int valor1, int valor2, int valor3);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Pode usar a variável com os mesmos nomes, mas os argumentos (valores/informações tem que ter quantidades diferentes)
	somaNumeros(10, 2);
	somaNumeros(10, 5, 20);
	
	system ("pause");
	return 0;	
}

void somaNumeros (int numero1, int numero2){
	
	cout << "Total 1: " << numero1 + numero2 << "\n\n";
	
}

void somaNumeros (int valor1, int valor2, int valor3){
	
	cout << "Total 2: " << valor1 + valor2 + valor3 << "\n\n";
	
}
