#ifndef Aluno_H_INCLUDED
#define Aluno_H_INCLUDED


class Aluno{


	
	//Pode ler e alterar em outros lugares
	public:
		
		int codigo;
		std::string nome;
	
	Aluno(int codigoAluno);
	
	int setidade(int idadeAluno);

	//Método para pegar o objeto do tipo privado
	int getidade();

	void exibirDadosNaTela();	
	
	//NÃO pode ler e alterar em outros lugares, só dentro da classe que foram criadas
	private:
		
		int idade;
		std::string sexo;
		
};

int Aluno::getidade(){
	
	return idade;
		
}

int Aluno::setidade(int idadeAluno){
	
	idade = idadeAluno;
	
}

//Para imprimir
	void Aluno::exibirDadosNaTela(){
		
		std::cout << "Código: " << codigo << std::endl;
		std::cout << "Nome: " << nome << std::endl;
		std::cout << "Idade: " << idade << std::endl;
		std::cout << "Sexo: " << sexo << std::endl;
		std::cout << std::endl;
		
	}

//Metodo Construtor
Aluno::Aluno(int codigoAluno){
	
	if ( codigoAluno == 1 ){
		
		codigo = 1;
		nome = "Ana Paula";
		idade = 32;
		sexo = "Feminino";
		
	}
	
	
}


#endif
