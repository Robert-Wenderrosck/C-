#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	/*Exercício
	Crie um algoritmo que solicite ao usuário uma letra e depois 
	verifique se a letra digitada é "F" ou "M".
	
		Caso a letra digitada seja F imprima a palavra Feminino.
		Caso a letra digitada seja M imprima a palavra Masculino.
		Caso o usuário digite qualquer outra coisa, imprima a palavra Sexo Inválido.
		
	*/
	
	char letra;
	
	cout << "Digite uma letra: \n";
	cin >> letra;
	
	if (letra== 'F' || letra == 'f'){
		
		cout << "\nA letra F representa o sexo Feminino.\n\n";
			
	}else if (letra== 'M' || letra == 'm'){
		
		cout << "\nA letra M representa o sexo Masculino.\n\n";
		
		
	}else{
		
		cout << "\nSexo inválido!\n\n";
		
	}
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
