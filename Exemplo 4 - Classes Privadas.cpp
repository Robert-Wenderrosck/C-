#include <iostream>
#include <locale.h>

using namespace std;

#include "AlunoPrivado.h"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	Aluno *dadosAluno = new Aluno(1);
	
	//Imprimindo dados
	dadosAluno -> exibirDadosNaTela();
	
	//Alterando o nome que é da classe público
	dadosAluno -> nome = "Pedro Ramos";
	dadosAluno -> setidade(23);
	
	//Imprimindo dados
	dadosAluno -> exibirDadosNaTela();
	
	//Alterando idade
	dadosAluno -> setidade(45);
	
	cout << "\n\n----------------- Imprimindo públicos e privados -----------------------\n\n";
	cout << dadosAluno -> nome << "\n";
	cout << dadosAluno -> getidade() << "\n";
	
	
	system ("pause");
	return 0;	
}
