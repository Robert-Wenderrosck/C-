#include <iostream>
/*
Iostream � uma biblioteca
I - Vem de Input - Entrada
O - Vem de Output - Sa�da
*/

#include <locale.h> //Para usarmos acentos

/*
Importando todos os identificadores do NameSpace STD para usar o cout e endl
O Namespace � nada mais nada menos que uma organiza��o de pastas
*/
using namespace std;

/*
Todo o programa em C++ tem uma e somente uma fun��o principal que � a fun��o MAIN
*/
int main(){
	
	setlocale(LC_ALL,"");
	
	cout << "Ol� Mundo!" <<endl;
	
	cout <<"Ol�, mundo! \n Sou o Robert" <<endl;
	
	
	//A fun��o main diz que retorna um inteiro, ent�o colocamos o 0 como tipo retorno
	return 0;
	
}
