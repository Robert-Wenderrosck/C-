#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	string fruta;
	
	numero = 5;
	
	//if = se
	//&& = e 
	if ( numero >= 2 && numero <= 10 ){
		
		cout << "--------------------\n";
		cout << "N�mero: " << numero << "\n";
		cout << "Est� no intervalo de 2 a 10\n\n";
		
	}else {
		
		cout << "--------------------\n";
		cout << "N�mero: " << numero << "\n";
		cout << "N�O est� no intervalo de 2 a 10\n\n";
		
	}
	
	// || = ou, (uma condi��o sendo verdadeira j� imprime)
	if (numero >=2 || numero <=10 ){
		
		cout << "\n\n--------- || -- OU -----------\n";
		cout << "N�mero: " << numero << "\n";
		cout << "� Maior ou igual a 2 OU Menor ou Igual a 10\n\n";
		
	}
	
	fruta = "laranja";
	if ( fruta == "ma�a" || fruta == "banana" ){
		
		cout << "\n\n-------- FRUTA -------\n";
		cout << "Fruta: " << fruta << "\n";
		cout << "Fruta � Ma�a ou Banana\n\n";
		
	}else{
		
		cout << "\n\n-------- FRUTA -------\n";
		cout << "Fruta: " << fruta << "\n";
		cout << "Fruta N�O � Ma�a ou Banana\n\n";
		
	}
	
	
	
	system ("pause");
	
	return 0;
	
}
