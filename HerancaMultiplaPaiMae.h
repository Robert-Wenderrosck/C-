#ifndef Escola_H_INCLUDED
#define Escola_H_INCLUDED

class Pai{
	
	public:
		
		void imprimiDadosCasaPai();
	
};

void Pai::imprimiDadosCasaPai(){
	
	//Objetos
	std::cout << "---------- Dados Casa Pai ----------" << std::endl;
	std::cout << "Código: 1 " << std::endl;
	std::cout << "Proprietário: Matheus Alves " << std::endl;
	std::cout << "Estado: Santa Catarina " << std::endl;
	std::cout << "Cidade: Lages " << std::endl;
	std::cout << "Valor: R$ 500.000,00 " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
}

class Mae{
	
	public:
		
		void imprimiDadosCasaMae();
	
};

void Mae::imprimiDadosCasaMae(){
	
	//Objetos
	std::cout << "---------- Dados Casa Mãe ----------" << std::endl;
	std::cout << "Código: 2 " << std::endl;
	std::cout << "Proprietária: Alice Alves " << std::endl;
	std::cout << "Estado: Santa Catarina " << std::endl;
	std::cout << "Cidade: Florianópolis " << std::endl;
	std::cout << "Valor: R$ 4.500.000,00 " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
}

//Dois pontos indica que o filho vai herda a classe do Pai e a clase da Mae (Herda os objetos dos dois mesmo não tendo nada em sua própria classe)
class Filho : public Pai, public Mae{
	
	
};

#endif
