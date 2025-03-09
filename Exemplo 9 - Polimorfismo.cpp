#include <iostream>
#include <locale.h>

using namespace std;

#include "SobrecargaMetodos.h"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Polimorfismo
	Significa várias formas, pode mudar ou assumar outra forma 
	Podemos com o polimorfismo criar vários métodos construtores com o mesmo nome desde que tenham parametros diferentes
	*/
	
	Aluno *dadosAluno = new Aluno();
	
	//Método construtor 1
	dadosAluno -> DadosAluno();
	
	//Método construtor 2, sobrescreve o CPF (parâmetro) que está no outro código
	dadosAluno -> DadosAluno("222.222.222-22");
	
	//Método construtor 3, sobrescreve o CPF, nome, idade e sexo (parâmetros) que estão no outro código
	dadosAluno -> DadosAluno("222.222.222-22", "Berenice Alves", 39, "Feminino");
	
	system("pause");
	return 0;	
}
