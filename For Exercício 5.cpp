#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	/*Exerc�cio
	
		Em S�o Paulo tr�s candidatos est�o concorrendo as elei��es como veredor.
		Fa�a um algoritmo que pe�a o n�mero total de eleitores.
		
		Pe�a para cada eleitor votar e ao final mostre o n�mero de votos
		de votos que candidato recebeu e tamb�m mostre o total de votos nulos.
		
	*/
	
	int totalEleitores, candidato1, candidato2, candidato3, votosNulos, contador, opcao;
	
	cout << "Digite o n�mero total de eleitores da cidade de S�o Paulo: \n";
	cin >> totalEleitores;
	
	candidato1 = 0;
	candidato2 = 0;
	candidato3 = 0;
	votosNulos = 0;
	
	for ( contador = 1; contador <= totalEleitores; contador++ ){
		
		cout << "Digite o n�mero do candidato que deseja votar \n";
		cout << "(1-Candidato 1/ 2-Candidato 2/ 3-Candidato 3): \n";
		cin >> opcao;
		
		if ( opcao == 1 ){
			candidato1++;
		}else if ( opcao == 2 ){
			candidato2++;
		}else if ( opcao == 3 ){
			candidato3++;
		}else{
			votosNulos++;	
		}
		
	}
	
	cout << "\n\nTotal de votos do candidato 1: " << candidato1 << "\n";
	cout << "Total de votos do candidato 2: " << candidato2 << "\n";
	cout << "Total de votos do candidato 3: " << candidato3 << "\n";
	cout << "Total de votos nulos: " << votosNulos << "\n";
	
	system ("pause");
	return 0;
	
}
