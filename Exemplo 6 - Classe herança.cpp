#include <iostream>
#include <locale.h>

using namespace std;

#include "Herança.h"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	AlunoEscolaFilho *dadosEscolaFilho = new AlunoEscolaFilho();
	dadosEscolaFilho -> imprimirNaTela(); //Imprimimos na tela
	
	AlunoEscolaNeto *dadosNeto = new AlunoEscolaNeto();
	dadosNeto -> imprimirNaTela(); //Imprimimos na tela
	
	//Alteramos dados da escola Neto
	dadosNeto -> codigo=3;
	dadosNeto -> nome="Alfredo Alves";
	dadosNeto -> idade=38;
	dadosNeto -> imprimirNaTela(); //Imprimimos na tela
	
	system ("pause");
	return 0;
	
}
