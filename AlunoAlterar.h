#ifndef Aluno_H_INCLUDED
#define Aluno_H_INCLUDED

/* Essa classe que será incluida em outro código precisa ser salva antes de escrever o outro código.
	Salvar como tipo de arquivo: "HEADER FILES"
*/

class Aluno{
	
	public:
		
		//Objetos
		int codigo;
		std::string nome;
		int idade;
		std::string sexo;
	
		//Prototipando
		Aluno(int codigoAluno); //Metodo Construtor para receber o código
		
		//Criando método para imprimir
		void imprimirDadosNaTela();
};

void Aluno::imprimirDadosNaTela(){
	
	std::cout << "Código: " << codigo << std::endl;	
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Idade: " << idade << std::endl;
	std::cout << "Sexo: " << sexo << std::endl;
	std::cout << std::endl;
	
}

//Método construtor
Aluno::Aluno(int codigoAluno){
	
	if ( codigoAluno == 1 ){
		
		codigo = 1;
		nome = "Nicole";
		idade = 28;
		sexo = "Feminino";
		
	}else if ( codigoAluno == 2 ){
		
		codigo = 2;
		nome = "Allan";
		idade = 31;
		sexo = "Masculino";
		
	}
	
	
}

#endif
