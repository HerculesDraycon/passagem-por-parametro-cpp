/*Algoritmo que recebe como argumentos dois inteiros positivos n e d,
0 < d <= 9, e retorna quantas vezes o dígito d aparece no número n dado.
O programa solicita dois inteiros positivos n e d e,
usando a função, mostra quantas vezes o dígito d aparece no número n dado.*/

#include <iostream>
using namespace std;
int comp (int n, int d){
	
	int contador = 0;
	
	while(n>0){
		
		int digito = n%10;
		
		if(digito == d){
			contador++;
		}
		n/=10;
	}
	
	return contador;
	
}

int main(){
	
	int n, d;
	
	cout<<"Digite um numero inteiro: "<< endl;
	cin>>n;
	cout<<"Digite o algarismo que deseja contar no numero selecionado:"<< endl;
	cin>>d;
	cout<<comp(n, d)<<" algarismo(s) presentes";
	
	return 0;
}
