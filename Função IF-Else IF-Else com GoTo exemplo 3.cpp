#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "POrtuguese");
	
	string pais;
	
	//Para indicar que o recomecar é um Label colocamos os dois pontos no final
	recomecar:
		
	cout << "Qual o país vai ganhar a Copa do Mundo? \n";
	cin >> pais;
	
	//if = se
	if ( pais == "Brasil" ){
		
		cout << "\nMuito bem! O Brasil vai ser o campeão da copa do mundo, até breve!\n\n";
	
	//else if = senão se		
	}else if ( pais == "BRASIL" ){
		
		cout << "\nMuito bem! O Brasil vai ser o campeão da copa do mundo, até breve!\n\n";
			
	}else if ( pais == "brasil" ){
		
		cout << "\nMuito bem! O Brasil vai ser o campeão da copa do mundo, até breve!\n\n";
	
	//senão		
	}else{
		
		cout << "\n";
		goto recomecar;
		
	}	
	
	
	system ("pause");
	
	return 0;
	
}
