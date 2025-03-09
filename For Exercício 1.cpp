#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exercício
		Crie um algoritmo que leia um número e se ele for entre 1 a 10
		mostre a tabuada desse número, caso contrário, 
		emita a mensagem que o número não está no intervalo de 1 a 10.
		
	*/
	
	int numero, contador, resultado;
	
	cout << "Informe o número da tabuada que deseja ver: \n";
	cin >> numero;
	
	 if ( numero >= 1 && numero <= 10 ){
	 	
	 	for ( contador = 1; contador <= 10; contador++ ){
	 		
	 		resultado = ( numero * contador );
	 		cout << "\n" << numero << " x " << contador << " = " << resultado;
	 		
		 }
	 	 
	 	
	 }else{
	 	
	 	cout << "Número não está no intervalo de 1 a 10! \n";
	 	
	 }
	
	cout << "\n";
	
	system ("pause");
	return 0;
	
}
