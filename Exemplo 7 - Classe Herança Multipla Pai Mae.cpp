#include <iostream>
#include <locale.h>

using namespace std;

#include "HerancaMultiplaPaiMae.h"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	Filho *dadosFilho = new Filho();
	
	dadosFilho -> imprimiDadosCasaPai();
	
	dadosFilho -> imprimiDadosCasaMae();
	
	
	
	
	system("pause");
	return 0;
}
