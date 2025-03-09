#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	//Enum só retorna número inteiro
	//Podemos inserir textos, mas o que o Enum representa são números inteiros
	enum Roupas{meia, camisa, jaqueta, pijama};
	
	Roupas roupaSelecionada;
	
	roupaSelecionada = camisa;
	
	cout << "---------------- Exemplo 1 -----------------\n\n";
	cout << roupaSelecionada << "\n";
	
	//---------------------------------------------------------------------------
	
	//Adicionar um valor à primeira variável faz ela começar do valor digitado
	enum Calcados{tenis=10, sapato, chinelo, sandalia};
	
	Calcados calcadoSelecionado;
	
	calcadoSelecionado = chinelo;
	
	cout << "\n\n\n---------------- Exemplo 2 -----------------\n\n";
	cout << calcadoSelecionado << "\n";
	
	
	//---------------------------------------------------------------------------
	
	//Se adicionar valores as outras variáveis elas passam a ter o valor delas e não a continuação da contagem do primeiro
	enum Alimentos{pacoteArroz=5, pacoteFeijao=3, pacoteAcucar=2, pacoteCafe=10	};
	
	Alimentos alimentoSelecionado;
	
	alimentoSelecionado = pacoteFeijao;
	
	cout << "\n\n\n---------------- Exemplo 3 -----------------\n\n";
	cout << alimentoSelecionado << "\n\n";
	
	system ("pause");
	return 0;	
}
