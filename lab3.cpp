/*Algoritmo que conta até 10.000, isto é, a função contém um laço for com
um contador que vai de 1 até 10.000. O programa recebe do teclado um valor,
chama a função e então mostra o valor digitado.*/

#include <iostream>
using namespace std;

int i;

int contador (int i){
	
		for(i = 1; i<=10000; i++){
			cout<<i<<" ";
		}

}

int main(){
	
	int num;
	
	cout<<"Selecione um numero qualquer: "<< endl;
	cin>>num;
	
	cout<<contador(i)<< endl;
	
	cout<<"Voce digitou: "<<num;
	
	
	return 0;
}
