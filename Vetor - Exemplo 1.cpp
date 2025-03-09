#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Vetor
	string comodaGavetas[4];
	int posicao;
	
	// 1 variável com 4 posições
	comodaGavetas[0] = "Camisas";
	comodaGavetas[1] = "Calças";
	comodaGavetas[2] = "Jaquetas";
	comodaGavetas[3] = "Meias";
	
	cout << "---------------------- Exemplo 1 ----------------------------\n";
	cout << "Gaveta 1: " << comodaGavetas[0] << "\n";
	cout << "Gaveta 2: " << comodaGavetas[1] << "\n";
	cout << "Gaveta 3: " << comodaGavetas[2] << "\n";
	cout << "Gaveta 4: " << comodaGavetas[3] << "\n";
	
	cout << "\n\n---------------------- Exemplo 2 ----------------------------\n";
	for ( posicao = 0; posicao < 4; posicao++ ){
		
		cout << "Posição " << posicao << " : " << comodaGavetas[posicao] << "\n";
		
	}
	
	//----------------------------------------------------------------------
	
	int tamanho = 10;
	int posicao2, contador;
	
	// 1 variável com 10 posições
	string letrasAlfabeto[tamanho] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };
	
	cout << "\n\n---------------------- Exemplo 3 Letras Alfabeto ----------------------------\n";
	for ( posicao2 = 0, contador = 1; posicao2 < tamanho; posicao2++, contador++ ){
		
			cout << "Letra " << contador << " : " << letrasAlfabeto[posicao2] << "\n";
		
	}
	
	system ("pause");
	return 0;
	
}
