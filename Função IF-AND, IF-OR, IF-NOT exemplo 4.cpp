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
		cout << "Número: " << numero << "\n";
		cout << "Está no intervalo de 2 a 10\n\n";
		
	}else {
		
		cout << "--------------------\n";
		cout << "Número: " << numero << "\n";
		cout << "NÃO está no intervalo de 2 a 10\n\n";
		
	}
	
	// || = ou, (uma condição sendo verdadeira já imprime)
	if (numero >=2 || numero <=10 ){
		
		cout << "\n\n--------- || -- OU -----------\n";
		cout << "Número: " << numero << "\n";
		cout << "É Maior ou igual a 2 OU Menor ou Igual a 10\n\n";
		
	}
	
	fruta = "laranja";
	if ( fruta == "maça" || fruta == "banana" ){
		
		cout << "\n\n-------- FRUTA -------\n";
		cout << "Fruta: " << fruta << "\n";
		cout << "Fruta é Maça ou Banana\n\n";
		
	}else{
		
		cout << "\n\n-------- FRUTA -------\n";
		cout << "Fruta: " << fruta << "\n";
		cout << "Fruta NÃO é Maça ou Banana\n\n";
		
	}
	
	
	
	system ("pause");
	
	return 0;
	
}
