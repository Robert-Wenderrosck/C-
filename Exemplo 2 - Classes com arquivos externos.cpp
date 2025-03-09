#include <iostream>
#include <locale.h>

using namespace std;

#include "Aluno.h"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	Aluno *dadosAluno1 = new Aluno(1);
	Aluno *dadosAluno2 = new Aluno(2);
	Aluno *dadosAluno3 = new Aluno(3);
	Aluno *dadosAluno4 = new Aluno(4);
	
	dadosAluno1 -> exibirDadosNaTela();
	dadosAluno2 -> exibirDadosNaTela();
	dadosAluno3 -> exibirDadosNaTela();
	dadosAluno4 -> exibirDadosNaTela();
	
	system ("pause");
	return 0;
}
