#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	/*Exercício
	
		Em São Paulo três candidatos estão concorrendo as eleições como veredor.
		Faça um algoritmo que peça o número total de eleitores.
		
		Peça para cada eleitor votar e ao final mostre o número de votos
		de votos que candidato recebeu e também mostre o total de votos nulos.
		
	*/
	
	int totalEleitores, candidato1, candidato2, candidato3, votosNulos, contador, opcao;
	
	cout << "Digite o número total de eleitores da cidade de São Paulo: \n";
	cin >> totalEleitores;
	
	candidato1 = 0;
	candidato2 = 0;
	candidato3 = 0;
	votosNulos = 0;
	
	for ( contador = 1; contador <= totalEleitores; contador++ ){
		
		cout << "Digite o número do candidato que deseja votar \n";
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
