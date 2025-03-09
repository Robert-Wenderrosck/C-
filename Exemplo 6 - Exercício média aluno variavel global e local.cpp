#include <iostream>

#include <locale.h>

using namespace std;

double nota1VG, nota2VG;
string nome; 

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	/* Exercício Variáveis Globais e Locais Média Aluno
	Crie um algoritmo que leia o nome e as 4 notas de um aluno e depois imprima 
	o nome e a média do aluno usando as variáveis Globais e Locais.
	*/
	
	double nota3VL, nota4VL, media;
	
	cout << "Digite o nome do aluno(a): ";
	getline(cin, nome);
	
	cout << "Digite a nota 1:";
	cin >> nota1VG;
	
	cout << "Digite a nota 2:";
	cin >> nota2VG;
	
	cout << "Digite a nota 3:";
	cin >> nota3VL;
	
	cout << "Digite a nota 4:";
	cin >> nota4VL;
	
	media = (nota1VG + nota2VG + nota3VL + nota4VL) / 4;
	
	cout << "A média do(a) aluno(a) " << nome << " foi " << media << "\n\n";
	
	
	system ("pause");
	
	return 0;
}
