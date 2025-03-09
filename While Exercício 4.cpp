#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	/* Exerc�cio 
	Crie um algoritmo que solicite ao usu�rio a entrada de n�meros inteiros e positivos 
	no intervalo de 0 a 40 e s� saia da rotina quando o usu�rio digitar um n�mero negativo.
	
	Ap�s o usu�rio digitar um n�mero negativo, o algoritmo dever� imprimir a quantidade
	de n�meros que foram digitados nos seguintes intervalos:
	
	[0-10], [11-20], [21-30] e [31-40].
	
	*/
	
	int numero, intervalo1, intervalo2, intervalo3, intervalo4, numeroForaIntervalo;
	
	intervalo1 = 0;
	intervalo2 = 0;
	intervalo3 = 0;
	intervalo4 = 0;
	numeroForaIntervalo = 0;
	
	
	while ( true ){
		
		cout << "Digite um n�mero inteiro entre 0 e 40 (ou negativo para parar): \n";
		cin >> numero; 
		
		if ( numero < 0 ){
			
			break;
			
		}
		
		if ( numero <= 10){
			intervalo1++;	
		}else if ( numero <= 20){
			intervalo2++;
		}else if ( numero <= 30){
			intervalo3++;
		}else if( numero <= 40){	
			intervalo4++;
		}else 	
			numeroForaIntervalo++;
		}
		
	cout << "\nDos n�meros digitados: ";
	cout << "\nN�meros de [0-10]: " << intervalo1;
	cout << "\nN�meros de [11-20]: " << intervalo2;
	cout << "\nN�meros de [21-30]: " << intervalo3;
	cout << "\nN�meros de [31-40]: " << intervalo4;
	cout << "\nN�meros fora do intervalo: " << numeroForaIntervalo << "\n\n";
		
	
	
	system ("pause");
	return 0;
}
