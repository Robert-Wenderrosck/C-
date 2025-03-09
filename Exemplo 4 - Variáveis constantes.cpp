#include <iostream>

#include <locale.h>

using namespace std;


//Essas variáveis podem ser usadas em outras funções sem ser a int main
#define nome cout << "Meu nome é Robert Carvalho, sou aluno do curso de lógica de Programação\n\n";
#define pi 3.14159

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	//Variável já definida para apenas ser imprmida
	nome
	
	//Variável já definida que precisa do "cout" para imprimir pq não foi definido acima
	cout << "O valor do PI é " << pi << "\n\n";
	
	system ("pause");
	
	return 0;
}
