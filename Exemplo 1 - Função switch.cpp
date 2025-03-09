#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numeroCor;
	
	//Menu de opções
	cout << "Digite um número para escolher o país que vai ganhar a copa do mundo! \n";
	cout << "1 - Alemanha: \n";
	cout << "2 - Argentina: \n";
	cout << "3 - Camarões: \n";
	cout << "4 - Brasil: \n";
	cout << "5 - Sérvia: \n";
	cout << "6 - Suiça: \n";
	cin >> numeroCor;
	
	
	//Switch = Escolha
	switch( numeroCor){
		
		//case = caso
		case 1:
			
			cout << "Você escolheu a Alemanha para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
		
		case 2:
			
			cout << "Você escolheu a Argentina para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
			
		case 3:
			
			cout << "Você escolheu o Camarões para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
			
		case 4:
			
			cout << "Você escolheu o Brasil para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
			
		case 5:
			
			cout << "Você escolheu a Sérvia para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
			
		case 6:
			
			cout << "Você escolheu a Suiça para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
		
		//default - outro caso	
		default: 	
			cout << "Escolha inválida!\n";
			break;
	}
	
	
	system ("pause");
	return 0;
	
}
