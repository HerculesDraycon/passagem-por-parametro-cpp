/*Algoritmo que recebe um valor inteiro como parâmetro e devolve 1,
caso o valor passado seja par; e 0, caso contrário.
O programa recebe do teclado um número inteiro positivo
e informa se o número é par ou ímpar, usando a função.*/

#include <iostream>
using namespace std;

int num;

int teste (int num){
	
	if(num%2 == 0){
		return 1;
	} else {
		return 0;
	}

}

int main (){
	
	int num;
	
	cout<<"Selecione um numero e descubra se e par ou nao:"<< endl;
	cin>>num;
	
	if(teste (num) == 1){
		cout<<"numero par";
	} else {
		cout<<"numero impar";
	}
	
	return 0;
}
