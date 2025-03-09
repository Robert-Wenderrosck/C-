#include <iostream>
/*
Iostream é uma biblioteca
I - Vem de Input - Entrada
O - Vem de Output - Saída
*/

#include <locale.h> //Para usarmos acentos

/*
Importando todos os identificadores do NameSpace STD para usar o cout e endl
O Namespace é nada mais nada menos que uma organização de pastas
*/
using namespace std;

/*
Todo o programa em C++ tem uma e somente uma função principal que é a função MAIN
*/
int main(){
	

	setlocale(LC_ALL,"");
	
	//Variáveis é um espaço na memória onde vamos guardar valores temporariamente
	int numerosInteiros = 3;
	double numerosComCasasDecimais = 9.99;
	char letra = 'a';
	const char* letras = "abcdefg";
	string textos = "Aluna: Rosiane";
	bool verdadeiroFalso = false;
	
	cout << numerosInteiros << "\n";
	cout << numerosComCasasDecimais << "\n";
	cout << letra << "\n";
	cout << letras <<"\n";
	cout << textos << "\n";
	cout << verdadeiroFalso << "\n";
	
	//False gera o número 0; true gera o número 1
	
	
	//A função main diz que retorna um inteiro, então colocamos o 0 como tipo retorno
	return 0;
	
}
