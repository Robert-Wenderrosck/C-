#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exerc�cio
		Crie um algoritmo que leia um n�mero e se ele for entre 1 a 10
		mostre a tabuada desse n�mero, caso contr�rio, 
		emita a mensagem que o n�mero n�o est� no intervalo de 1 a 10.
		
	*/
	
	int numero, contador, resultado;
	
	cout << "Informe o n�mero da tabuada que deseja ver: \n";
	cin >> numero;
	
	 if ( numero >= 1 && numero <= 10 ){
	 	
	 	for ( contador = 1; contador <= 10; contador++ ){
	 		
	 		resultado = ( numero * contador );
	 		cout << "\n" << numero << " x " << contador << " = " << resultado;
	 		
		 }
	 	 
	 	
	 }else{
	 	
	 	cout << "N�mero n�o est� no intervalo de 1 a 10! \n";
	 	
	 }
	
	cout << "\n";
	
	system ("pause");
	return 0;
	
}
