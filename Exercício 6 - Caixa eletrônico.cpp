#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	/* Exerc�cio
	Crie um algoritmo que simule um caixa eletr�nico.
	O algoritmo deve solicitar ao usu�rio que ele digite o valor
	que deseja sacar. Esse valor deve ser entre 2 e 2.000 reais.
	
	Ap�s isso, imprima na tela quantas notas de 2, 5, 10, 20, 50, 100 e 200 reais 
	s�o necess�rias para completar o valor do saque.
	
	*/
	
	int valor, duzentos, cem, cinquenta, vinte, dez, cinco, dois, resto;
	
	cout << "Digite o valor que deseja sacar (Valores dispon�veis: R$ 2 a 2.000 reais): \n";
	cin >> valor;
	
	if ( valor < 2 || valor > 2000 ){
		
		cout << "Valor inv�lido!\n";
		
	}else{
		
		duzentos = valor /200; //Pegar a centena com a divis�o inteira
		cout << "Resultado 200: " << duzentos << "\n";
		valor -= duzentos * 200; //Subtrai com centena retirando o resto do valor
		
		cem = valor /100; 
		valor -= cem * 100;
		
		cinquenta = valor /50; 
		valor -= cinquenta * 50;
		
		vinte = valor /20; 
		valor -= vinte * 20;
		
		dez = valor /10; 
		valor -= dez * 10;
		
		cinco = valor /5; 
		valor -= cinco * 5;
		
		dois = valor /2; 
		valor -= dois * 2;
		
		resto = valor;
		
		cout << "Resultado Valor: " << valor << "\n";
		
			if ( resto >= 1 ){
				
				cout << "Valor inv�lido!";
				
			}else{
					
				if ( duzentos > 0 ){
				
				cout << "Nota(s) de 200: " << duzentos << "\n"; 
				
			}
					
				if ( cem > 0 ){
				
				cout << "Nota(s) de 100: " << cem << "\n"; 
				
			}
			
					
				if ( cinquenta > 0 ){
				
				cout << "Nota(s) de 50: " << cinquenta << "\n"; 
				
			}
			
					
				if ( vinte > 0 ){
				
				cout << "Nota(s) de 20: " << vinte << "\n"; 
				
			}
			
					
				if ( dez > 0 ){
				
				cout << "Nota(s) de 10: " << dez << "\n"; 
				
			}
			
					
				if ( cinco > 0 ){
				
				cout << "Nota(s) de 5: " << cinco << "\n"; 
				
			}
			
					
				if ( dois > 0 ){
				
				cout << "Nota(s) de 2: " << dois << "\n"; 
				
			}
		
		}
	}
	
	system ("pause");
	return 0;
}
