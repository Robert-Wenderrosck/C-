#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	double valorEntrada;
	string nome, sexo;
	
	valorEntrada = 12;
	
	cout << "Digite seu nome: \n";
	cin >> nome;
	
	cout << "Digite seu sexo: \n";
	cin >> sexo;
	
	//Se
	if ( sexo == "Masculino" ){
		
		cout << "\n\n----------- Comprovante de entrada ----------\n\n";
		cout << "Nome: " << nome << "\n";
		cout << "Valor entrada: " << valorEntrada << "\n\n";
		cout << "---------- Aproveite o show ----------" << "\n\n";
		
	//else if = Sen�o Se	
	}else if ( sexo == "Feminino" ){
		
		valorEntrada = valorEntrada /2;
		
		cout << "\n\n----------- Comprovante de entrada ----------\n\n";
		cout << "Nome: " << nome << "\n";
		cout << "Valor entrada: " << valorEntrada << "\n\n";
		cout << "---------- Aproveite o show ----------" << "\n\n";
		
	//else = sen�o	
	}else{
		
		cout << "\n\nVoc� n�o digitou um sexo v�lido!\n\n";
		
	}
	
	
	
	system ("pause");
	return 0;
	
}
