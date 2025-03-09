#include <iostream>
#include <locale.h>

using namespace std;

//INCLUIR O CÓDIGO CRIADO ANTERIORMENTE
#include "AlunoAlterar.h"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	Aluno *dadosAluno1 = new Aluno(1);
	
	//Exibindo dados na tela do código criado anteriormente
	dadosAluno1 -> imprimirDadosNaTela();
	
	//Altera o valor do nome
	dadosAluno1 -> nome = "Amanda";
	
	//Exibindo dados na tela criado nesse código
	dadosAluno1 -> imprimirDadosNaTela();
	
	//---------------------Escrever manualmente --------------------------------------
	
	string nomeAluno;
	int idadeAluno;
	string sexoAluno;
	
	cout << "\n\nDigite o nome do aluno: \n";
	cin >> nomeAluno;
	
	cout << "Digite a idade do aluno: \n";
	cin >> idadeAluno;
	
	cout << "Digite o sexo do aluno: \n";
	cin >> sexoAluno;
	
	dadosAluno1 -> nome = nomeAluno;
	dadosAluno1 -> idade = idadeAluno;
	dadosAluno1 -> sexo = sexoAluno;
	
	dadosAluno1 -> imprimirDadosNaTela();
	
	system ("pause");
	return 0;
}
