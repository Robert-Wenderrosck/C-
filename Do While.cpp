#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador;
	
	contador = 1;
	
	//Do = Fa�a
	//While = Enquanto
	//Diferente do while o Do While sempre vai executar o c�digo pelo menos uma vez!
	do{
		
		cout << "N�mero: " << contador << "\n";
		
		contador++;
		
	}while ( contador < 101 );
	
	
	system ("pause");
	return 0;
	
}
