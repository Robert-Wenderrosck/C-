#include <iostream>
#include <locale.h>

using namespace std;

//prototipar = Apresentar (Colocou os valores na hora de prototipar)
void funcaoNome(string nomeUsuario="Paulo"); 
void funcaoIdade(int idadeUsuario=29);

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	
	//Ao invés de passar os parametros aqui, omitimos os valores e colocamos o valor na hora de prototipar
	funcaoNome();
	funcaoIdade();
	

	system ("pause");
	return 0;
}

void funcaoNome(string nomeUsuario){
	
	cout << "Nome: " << nomeUsuario << "\n";
	
}

void funcaoIdade(int idadeUsuario){
	
	cout << "Idade: " << idadeUsuario << "\n";
	
}
