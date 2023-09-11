/*Algoritmo que retorna true se o número recebido for múltiplo de 5 e
false, caso contrário.*/

#include <iostream>
using namespace std;

int num;

int teste(int num){
	
	if(num%5 == 0){
		return true;
	} else {
		return false;
	}
	
}

int main(){
	
	int num;
	
	cout<<"Selecione um numero e descubra se e multiplo de cinco ou nao"<< endl;
	cin>>num;
	
	if(teste (num) == true){
		cout<<"O numero e multiplo de cinco";
	} else {
		cout<<"O numero nao e multiplo de cinco";
	}
	
	return 0;
}
