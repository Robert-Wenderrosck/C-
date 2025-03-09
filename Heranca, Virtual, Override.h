#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED

class AlunoEscolaPai{
	
	public:
		
		//Objetos
		int codigo;
		std::string nome;
		std::string sexo;
		int idade;
	
	
		//Virtual vai permitir sobrescrever o método. Essa classe será refeita por qualquer outra classe herdeira
		virtual void exibirNaTela(){
			
			std::cout << "Código: " << codigo << std::endl;
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "Sexo: " << sexo << std::endl;
			std::cout << "Idade: " << idade << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
				
		}
};

//Dois pontos para herdar os objetos da Classe AlunoEscolaPai
class AlunoEscolaFilho : public AlunoEscolaPai{
	
	public: 
	
		//Prototipando/apresentando
		AlunoEscolaFilho();
	
};

AlunoEscolaFilho::AlunoEscolaFilho(){
	
	//Método construtor
	codigo = 1;
	nome = "Camila Gonçalves";
	sexo = "Feminino";
	idade = 23;
	
}

class AlunoEscolaNeto : public AlunoEscolaPai{
	
	public:
		
		//Objetos
		std::string escola;
		std::string periodo;
	
		AlunoEscolaNeto(string escolaNeto, string periodoManhaTarde) : escola(escolaNeto), periodo(periodoManhaTarde){
			
			//Método construtor
			codigo = 2;
			nome = "Francisco Pires";
			sexo = "Masculino";
			idade = 19;
			
		}
		
		//Override significa sobrescrever os valores por cima
		void exibirNaTela() override{
			
			std::cout << "---------- Escola Neto com Override ----------" << std::endl;
			std::cout << "Escola: " << escola << std::endl;
			std::cout << "Período: " << periodo << std::endl;
			std::cout << "Código: " << codigo << std::endl;
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "Sexo: " << sexo << std::endl;
			std::cout << "Idade: " << idade << std::endl;
			
		}
	
	
};

#endif
