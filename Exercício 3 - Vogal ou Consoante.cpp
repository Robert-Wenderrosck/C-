#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exerc�cio 
	Crie um algoritmo que solicite ao usu�rio que digite uma letra,
	ap�s isso verifique se a letra digitada � vogal ou consoante
	e imprima na tela o resultado.
	*/
	
	char letra;
	
	cout << "Digite uma letra: \n";
	cin >> letra;
	
	//Pode colocar todas as vogais juntas na fun��o if inicial usando ||
	if ( letra == 'a' || letra == 'A'){
		
		cout << "\nA letra: " << letra << " � uma vogal.\n\n";
		
	}else if ( letra == 'e' || letra == 'E'){
		
		cout << "\nA letra: " << letra << " � uma vogal.\n\n";
		
	}else if ( letra == 'I' || letra == 'i'){
		
		cout << "\nA letra: " << letra << " � uma vogal.\n\n";
		
	}else if ( letra == 'O' || letra == 'o'){
		
		cout << "\nA letra: " << letra << " � uma vogal.\n\n";
		
	}else if ( letra == 'U' || letra == 'u'){
		
		cout << "\nA letra: " << letra << " � uma vogal.\n\n";
		
	}else{
		
		cout << "\nA letra: " << letra << " � uma consoante.\n\n";
		
	}
	
	
	system ("pause");
	return 0;
	
}
