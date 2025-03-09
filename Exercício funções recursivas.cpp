#include <iostream>
#include <locale.h>

using namespace std;

int somarNumeros(int numeroRecebido);


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exerc�cio de Recursividade
		Crie um algoritmo usando Recursividade que solicite ao usu�rio
		que digite um n�mero e em seguida, calcule a somat�ria do 1 ao n�mero
		que o usu�rio digitou.
	
	Ex.: Se digitar 5: 1 + 2 + 3 + 4 + 5 = 15
		
	*/
	
	int numero, somatorio; 
	
	cout << "Digite o n�mero: ";
	cin >> numero;
	
	somatorio = somarNumeros(numero);
	
	cout << "A soma dos n�meros de 1 at� " << numero << " � " << somatorio << "\n";
	
	system ("pause");
	return 0;
}

int somarNumeros(int numeroRecebido){
	
	int resultado;
	
	if (numeroRecebido == 1){
		
		return (1);
		
	}else{
		
		resultado = numeroRecebido + somarNumeros (numeroRecebido - 1);	
		
	}

	return (resultado);
		
}
