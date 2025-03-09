#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED

class Aluno{
	
	public:
		
		//Objetos
		int idade;
		std::string nome;
		std::string sexo;
		std::string cpf;
		
		//Método construtor 1
		DadosAluno(){
			
			idade = 28;
			nome = "Amanda Oliveira";
			sexo = "Feminino";
			cpf = "111.111.111-11";
			
			std::cout << "Idade: " << idade << std::endl;
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "sexo: " << sexo << std::endl;
			std::cout << "CPF: " << cpf << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			
		}
		
		//Método construtor 2
		DadosAluno(string cpfAluno){
			
			cpf = cpfAluno;
			
			std::cout << "---------- Método construtor 2 -----------" << std::endl;
			std::cout << "CPF: " << cpfAluno << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			
		}
		
		//Método construtor 3
		DadosAluno(string cpfAluno, string nomeCompleto, int idadeAluno, string sexoAluno){
			
			idade = idadeAluno;
			nome = nomeCompleto;
			sexo = sexoAluno;
			cpf = cpfAluno;
			
			std::cout << "---------- Método construtor 3 -----------" << std::endl;
			std::cout << "Idade: " << idade << std::endl;
			std::cout << "Nome: " << nome << std::endl;
			std::cout << "sexo: " << sexo << std::endl;
			std::cout << "CPF: " << cpf << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			
		}
		
};



#endif
