//Crie um algoritmo que converta metros para cent�metros

#include <iostream> //Entrada e sa�da de dados

#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	double metro, centimetro; //Vari�vel com casas decimais
	
	cout << "Digite quantos metros voc� deseja converter: \n";
	cin >> metro;
	
	centimetro = metro * 100;
	
	cout << "\n" << metro << " metros correspondem a " << centimetro << " centimetros. \n\n";
	
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//tipo de retoro da fun��o main que � um inteiro
	return 0;
}


