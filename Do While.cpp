#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador;
	
	contador = 1;
	
	//Do = Faça
	//While = Enquanto
	//Diferente do while o Do While sempre vai executar o código pelo menos uma vez!
	do{
		
		cout << "Número: " << contador << "\n";
		
		contador++;
		
	}while ( contador < 101 );
	
	
	system ("pause");
	return 0;
	
}
