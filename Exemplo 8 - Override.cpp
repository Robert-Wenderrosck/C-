#include <iostream>
#include <locale.h>

using namespace std;

#include "Heranca, Virtual, Override.h"

int main(){
	
	setlocale(LC_ALL, "Portguese");
	
	AlunoEscolaFilho *dadosEscolaFilho = new AlunoEscolaFilho();
	
	dadosEscolaFilho -> exibirNaTela();
	
	
	AlunoEscolaNeto *dadosEscolaNeto = new AlunoEscolaNeto("Escola do Neto", "Período Matutino");
	
	dadosEscolaNeto -> escola = "Escola Alves Neto Herdeiro";
	dadosEscolaNeto -> periodo = "Vespertino";
	
	dadosEscolaNeto -> exibirNaTela();
	
	system("pause");
	return 0;
	
}
