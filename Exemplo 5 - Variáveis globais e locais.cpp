#include <iostream>

#include <locale.h>

using namespace std;

//VG = Variável Global - Acessamos dentro de outras funções
double nota1VG, nota2VG;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	//VL = Variáveis Locais - Acessamos apenas dentro da nossa função
	double nota3VL, nota4VL, media;
	
	nota1VG = 10;
	nota2VG = 5;
	nota3VL = 5;
	nota4VL = 8;
	
	media = (nota1VG + nota2VG + nota3VL + nota4VL) / 4;
	
	cout << "Média: " << media << "\n";
	
	system ("pause");
	
	return 0;
}
