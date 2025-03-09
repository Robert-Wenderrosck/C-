#include <iostream>
#include <locale.h>

using namespace std;

class Aluno{
	
	public:
		
		//Objetos
		string nome = "Maria Eduarda";
		int idade = 29;
		string sexo = "Feminino";
		
		string estado;
		
		//Prototipamos
		void verificaEstado(string estadoDoAluno);
	
}; 

//Construimos o nosso método
void Aluno::verificaEstado(string estadoDoAluno){
	
	if( estadoDoAluno == "SP" ){
		
		this -> estado = "São Paulo";
		
	}else if( estadoDoAluno == "SC" ){
		
		this -> estado = "Santa Catarina";
		
	}else if( estadoDoAluno == "RJ" ){
		
		this -> estado = "Rio de Janeiro";
		
	}
	
}

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	Aluno *dadosAluno = new Aluno();
	
	cout << "Nome: " << dadosAluno -> nome << "\n";
	cout << "Idade: " << dadosAluno -> idade << "\n";
	cout << "Sexo: " << dadosAluno -> sexo << "\n";
	
	dadosAluno -> verificaEstado("SP");
	cout << "Estado: " << dadosAluno -> estado << "\n";
	
	dadosAluno -> verificaEstado("RJ");
	cout << "Estado: " << dadosAluno -> estado << "\n";
	
	system("pause");
	return 0;
	
}
