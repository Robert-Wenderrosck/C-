#include <iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//while = enquanto
	
	int contador;
	
	contador = 1;
	
	//Enquanto
	while ( contador < 11 ){
		
		//Impressão na tela
		cout << "Número: " << contador << "\n";
		
		//Contador + 1
		contador++;
	
	}
	
	//-------------------------------------------------------------
	
	int contador2;
	
	contador2 = 10;
	
	cout << "\n\nExemplo 2 \n\n";
	
	while ( contador2 > 0 ){
	
		cout << contador2 << "\n";
		
		//Contar - 1
		contador2--;		
		
		
	}	
	
	//------------------------------------------------------------------
	
	int qtdVezes;
	double nota, media, soma;
	
	soma = 0;
	qtdVezes = 1;
	
	while ( qtdVezes <= 4 ){
		
		cout << "Digite a nota " << qtdVezes << "\n";
		cin >> nota;
		
		//soma = soma + nota = 18
		soma+=nota;
		
		//++ = qtdVezes + 1 
		qtdVezes++;
			
	}
	
	cout << "\n\n";
	media = soma / 4;
	
	cout << "A média é: " << media << "\n";	
	
	
	
	
	
	system ("pause");
	return 0;
	
}
