#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "POrtuguese");
	
	string pais;
	
	//Para indicar que o recomecar � um Label colocamos os dois pontos no final
	recomecar:
		
	cout << "Qual o pa�s vai ganhar a Copa do Mundo? \n";
	cin >> pais;
	
	//if = se
	if ( pais == "Brasil" ){
		
		cout << "\nMuito bem! O Brasil vai ser o campe�o da copa do mundo, at� breve!\n\n";
	
	//else if = sen�o se		
	}else if ( pais == "BRASIL" ){
		
		cout << "\nMuito bem! O Brasil vai ser o campe�o da copa do mundo, at� breve!\n\n";
			
	}else if ( pais == "brasil" ){
		
		cout << "\nMuito bem! O Brasil vai ser o campe�o da copa do mundo, at� breve!\n\n";
	
	//sen�o		
	}else{
		
		cout << "\n";
		goto recomecar;
		
	}	
	
	
	system ("pause");
	
	return 0;
	
}
