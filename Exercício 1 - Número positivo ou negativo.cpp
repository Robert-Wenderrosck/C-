#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exerc�cio
	Crie um algoritmo que solicite ao usu�rio um n�mero inteiro 
	e depois imprima na tela se este n�mero � positivo ou negativo.
	*/
	
	int numero;
	
	cout << "Digite um n�mero inteiro: \n";
	cin >> numero;
	
	if (numero > 0){
		
		cout << "\nO n�mero " << numero << " � positivo!\n\n";
		
		
	}else if (numero < 0){
	
		
		cout << "\nO n�mero " << numero << " � negativo!\n\n"; 
		
	}else{
	
		
		cout << "O n�mero " << numero << " N�O possui sinal!\n\n";
		
	}
	
	
	
	
	
	
	system ("pause");
	return 0;
	
}
