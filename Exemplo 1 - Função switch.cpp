#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numeroCor;
	
	//Menu de op��es
	cout << "Digite um n�mero para escolher o pa�s que vai ganhar a copa do mundo! \n";
	cout << "1 - Alemanha: \n";
	cout << "2 - Argentina: \n";
	cout << "3 - Camar�es: \n";
	cout << "4 - Brasil: \n";
	cout << "5 - S�rvia: \n";
	cout << "6 - Sui�a: \n";
	cin >> numeroCor;
	
	
	//Switch = Escolha
	switch( numeroCor){
		
		//case = caso
		case 1:
			
			cout << "Voc� escolheu a Alemanha para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
		
		case 2:
			
			cout << "Voc� escolheu a Argentina para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
			
		case 3:
			
			cout << "Voc� escolheu o Camar�es para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
			
		case 4:
			
			cout << "Voc� escolheu o Brasil para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
			
		case 5:
			
			cout << "Voc� escolheu a S�rvia para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
			
		case 6:
			
			cout << "Voc� escolheu a Sui�a para ganhar a copa do mundo! \n\n";
			
			//break = Para
			break;
		
		//default - outro caso	
		default: 	
			cout << "Escolha inv�lida!\n";
			break;
	}
	
	
	system ("pause");
	return 0;
	
}
