#include <iostream>

#include <locale.h>

using namespace std;

//VG = Vari�vel Global - Acessamos dentro de outras fun��es
double nota1VG, nota2VG;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	//VL = Vari�veis Locais - Acessamos apenas dentro da nossa fun��o
	double nota3VL, nota4VL, media;
	
	nota1VG = 10;
	nota2VG = 5;
	nota3VL = 5;
	nota4VL = 8;
	
	media = (nota1VG + nota2VG + nota3VL + nota4VL) / 4;
	
	cout << "M�dia: " << media << "\n";
	
	system ("pause");
	
	return 0;
}
