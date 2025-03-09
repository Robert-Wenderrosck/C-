#include <iostream>
#include <locale.h>

using namespace std;

void nomeCompleto(string name, string lastName);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Exercício
		Crie uma função que receba o nome e sobrenome,
		depois junte ambos e imprima-os na tela.
		
	*/
	
	string nome, sobrenome;
	
	cout << "Digite o seu nome: ";
	cin >> nome;
	
	cout << "Digite seu sobrenome: ";
	cin >> sobrenome;
	
	nomeCompleto (nome, sobrenome);
	
	
	system ("pause");
	return 0;
	
}

void nomeCompleto(string name, string lastName){
	
	cout << "\nO seu nome completo é: " << name << " " << lastName << " .\n\n";
	
}
