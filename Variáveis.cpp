#include <iostream>
/*
Iostream � uma biblioteca
I - Vem de Input - Entrada
O - Vem de Output - Sa�da
*/

#include <locale.h> //Para usarmos acentos

/*
Importando todos os identificadores do NameSpace STD para usar o cout e endl
O Namespace � nada mais nada menos que uma organiza��o de pastas
*/
using namespace std;

/*
Todo o programa em C++ tem uma e somente uma fun��o principal que � a fun��o MAIN
*/
int main(){
	

	setlocale(LC_ALL,"");
	
	//Vari�veis � um espa�o na mem�ria onde vamos guardar valores temporariamente
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
	
	//False gera o n�mero 0; true gera o n�mero 1
	
	
	//A fun��o main diz que retorna um inteiro, ent�o colocamos o 0 como tipo retorno
	return 0;
	
}
