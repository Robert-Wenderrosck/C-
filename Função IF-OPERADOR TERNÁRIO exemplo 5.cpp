#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "POrtuguese");
	
	string letra, mensagem;
	
	cout << "Digite uma letra: \n";
	cin >> letra; 
	
	//Resumindo a estrutura da FUNÇÃO IF
	// "?" funciona como if; ":" funciona como else 
	(letra == "a") ? mensagem = "Você digitou a letra A" : mensagem = "Você não digitou a letra A";
	
	cout << "----------------\n";
	cout << "Letra digitada: " << letra << "\n";
	cout << "Resultado: " << mensagem << "\n\n";
	
	//-----------------------------------------------------------------------------
	
	string vogal, resultado;
	
	cout << "Digite uma letra: \n";
	cin >> vogal;
	
	(vogal == "a") ? resultado = "Vogal A" : (vogal == "e") ? resultado = "Vogal E" : (vogal == "i") ? resultado = "Vogal I" : (vogal == "o") ? resultado = "Vogal O" : (vogal == "u") ? resultado = "Vogal U" : resultado = "Consoante "+vogal;
	cout << "-------- Exemplo 2 Vogal ou Consoante --------\n";
	cout << "Letra digitada: " << vogal << "\n";
	cout << "Resultado: " << resultado << "\n\n";
	
	//------------------------------------------------------------------------------
	
	string sexo;
	int preco;
	
	preco = 10;
	
	cout << "\nDigite a primeira letra do seu sexo: \n";
	cin >> sexo;
	
	(sexo == "m") ? preco++ : preco-=3;
	
	cout << "\n\n ------------ Exemplo Ingresso ------------\n\n";
	(sexo == "m") ? cout << "Sexo : Masculino: " << preco << "\n\n": cout << "Sexo: Feminino: " << preco << "\n\n";
	
	system ("pause");
	return 0;
	
}
