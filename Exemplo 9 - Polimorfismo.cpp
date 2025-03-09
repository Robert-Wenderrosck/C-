#include <iostream>
#include <locale.h>

using namespace std;

#include "SobrecargaMetodos.h"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Polimorfismo
	Significa v�rias formas, pode mudar ou assumar outra forma 
	Podemos com o polimorfismo criar v�rios m�todos construtores com o mesmo nome desde que tenham parametros diferentes
	*/
	
	Aluno *dadosAluno = new Aluno();
	
	//M�todo construtor 1
	dadosAluno -> DadosAluno();
	
	//M�todo construtor 2, sobrescreve o CPF (par�metro) que est� no outro c�digo
	dadosAluno -> DadosAluno("222.222.222-22");
	
	//M�todo construtor 3, sobrescreve o CPF, nome, idade e sexo (par�metros) que est�o no outro c�digo
	dadosAluno -> DadosAluno("222.222.222-22", "Berenice Alves", 39, "Feminino");
	
	system("pause");
	return 0;	
}
