//Crie um algoritmo que converta metros para centímetros

#include <iostream> //Entrada e saída de dados

#include <locale.h> //Para trabalhar com acentos

//Organização de pastas e poder usar o cout, cin e endl
using namespace std;

int main(){
	
	//Biblioteca responsável pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	double metro, centimetro; //Variável com casas decimais
	
	cout << "Digite quantos metros você deseja converter: \n";
	cin >> metro;
	
	centimetro = metro * 100;
	
	cout << "\n" << metro << " metros correspondem a " << centimetro << " centimetros. \n\n";
	
	//Impede o fechamento da tela após execução do código para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//tipo de retoro da função main que é um inteiro
	return 0;
}


