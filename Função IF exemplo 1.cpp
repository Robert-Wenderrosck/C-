#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2;
	string fruta;
	
	numero1 = 20;
	
	//IF = SE
	
	if ( numero1 > 50){
		
		cout << "---------- Resultado IF N�mero 1 ----------\n";
		cout << "O n�mero 1 � maior que 50\n";
		
	}else{
		
		cout << "---------- Resultado IF N�mero 1 ----------\n";
		cout << "O n�mero 1 n�o � maior que 50\n";
		
	}
		
	numero2 = 10;	
	
	if ( numero1 > numero2 ){
		
		cout << "\n\n---------- Resultado IF N�mero 1 e N�mero 2 ----------\n\n";
		cout << "N�mero 1: " << numero1 << "\n";
		cout << "N�mero 2: " << numero2 << "\n";
		cout << "O n�mero 1 � maior que o n�mero 2\n";
		
	}else{
		
		cout << "\n\n---------- Resultado IF N�mero 1 e N�mero 2 ----------\n\n";
		cout << "N�mero 1: " << numero1 << "\n";
		cout << "N�mero 2: " << numero2 << "\n";
		cout << "O n�mero 1 N�O � maior que o n�mero 2\n";
		
	}
	
	fruta = "Ma�a"; //A palavra tem que ser exatamente igual com letras mai�sculas e min�sculas
	
	if ( fruta == "Ma�a" ){
		
		cout << "\n\n---------- Resultado IF Fruta ----------\n\n";
		cout << "Fruta:  " << fruta << "\n";
		cout << "A fruta � Ma�a!\n";
		
	}else{
		
		cout << "\n\n---------- Resultado IF Fruta ----------\n\n";
		cout << "Fruta:  " << fruta << "\n";
		cout << "A fruta N�o � Ma�a!\n";
		
	}
	
	
	
	
	
	system ("pause");
	return 0;
	
}
