#include <iostream> //Entrada e sa�da de dados

#include <locale.h> //Para trabalhar com acentos

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome; 
	int idade;
	
	cout << "Digite seu nome: \n";
	getline(cin, nome);
	
	cout << "Digite sua idade: \n";
	cin >> idade;
	
	cout << "-------------------------------\n";
	cout << "Nome: " << nome << "\n";
	cout << "Idade: " << idade << "\n";
	
	system("pause");
	return 0; 
}
