#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	cout << "--------------------- Resultado Exemplo 1 ---------------------\n\n";
	//for = para
	for ( numero = 1; numero < 11; numero++ ){
		
		cout << "Número: " << numero << "\n";	
		
	}
	
	cout << "--------------------- Resultado Exemplo 2 ---------------------\n\n";	
	
	string nome;
	int contador;
	double nota, media, soma;
	
	soma = 0;
	
	cout << "Digite o nome do aluno: \n";
	cin >> nome;
	
	for ( contador = 1; contador <= 4; contador++ ){
		
		cout << "Digite a nota " << contador << "\n";
		cin >> nota;
		
		soma += nota;
		
	}
	
	media = soma / 4;
	
	cout << "\n\nAluno(a): " << nome << "\n";
	cout << "\n\nMédia: " << media << "\n";
	cout << "\n\n";
	
	
	system ("pause");
	return 0;	
}
