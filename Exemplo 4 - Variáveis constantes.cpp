#include <iostream>

#include <locale.h>

using namespace std;


//Essas vari�veis podem ser usadas em outras fun��es sem ser a int main
#define nome cout << "Meu nome � Robert Carvalho, sou aluno do curso de l�gica de Programa��o\n\n";
#define pi 3.14159

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	//Vari�vel j� definida para apenas ser imprmida
	nome
	
	//Vari�vel j� definida que precisa do "cout" para imprimir pq n�o foi definido acima
	cout << "O valor do PI � " << pi << "\n\n";
	
	system ("pause");
	
	return 0;
}
