#ifndef Heranca_H_INCLUDED
#define Heranca_H_INCLUDED

class AlunoEscolaPai{
	
	public:
		
		//Objetos
		int codigo;
		std::string nome;
		std::string sexo;
		int idade;	
	
		void imprimirNaTela();
};

void AlunoEscolaPai::imprimirNaTela(){
	
	std::cout << "Código: " << codigo << std::endl;
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Sexo: " << sexo << std::endl;
	std::cout << "Idade: " << idade << std::endl;
	std::cout << std::endl;
	
}

//Dois pontos significa que está herdando os dados da AlunoEscolaPai (AlunoEscolaFilho terá acesso a todos os objetos do AlunoEscolaPai)
class AlunoEscolaFilho : public AlunoEscolaPai{
	
	public:
		
		//Prototipar
		AlunoEscolaFilho();
		
};

//Metodo construtor
AlunoEscolaFilho::AlunoEscolaFilho(){
	
	codigo = 1;
	nome = "Cleonice";
	sexo = "Feminino";
	idade = 19;
	
}

//Dois pontos significa que está herdando os dados da AlunoEscolaPai
class AlunoEscolaNeto : public AlunoEscolaPai{
	
	public:
		
		//Prototipar
		AlunoEscolaNeto();
			
				
};

AlunoEscolaNeto::AlunoEscolaNeto(){
	
	codigo = 2;
	nome = "Allan";
	sexo = "Masculino";
	idade = 28;
	
	
};

#endif
