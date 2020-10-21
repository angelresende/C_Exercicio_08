 #include <iostream>
#include <clocale> // setlocale
#include <cstdlib> // system
#include <string> // Textos em geral

using namespace std;

void calculadora(int n1, int n2, int* sm);
void Maior(int n1, int n2, int* maior);
void troca(int* ptrx, int* ptry);
void digite_valores(int *n1, int *n2);

int main() {
	setlocale(LC_ALL, "Portuguese");

	int *x, *y;
	int *n1, *n2;
	int soma, maior;
	
	x = new int;
	y = new int;
	n1 = new int;
	n2 = new int;

	*x = 10;
	*y = 20;
	


	calculadora(*x, *y, &soma); //Chamada da função para calcular a soma das variáveis
	
	cout << "Soma: " << soma << endl << endl;

	Maior(*x, *y, &maior); //Chamada da função informar o maior valor das variáveis
	cout << "Maior valor: " << maior << endl << endl;

	cout << "Valor de ptrx: " << *x << "\nValor de ptry: " << *y << endl;

	troca(&*x, &*y); //Chamada da função que troca os valores das variáveis		
	cout << "Valor trocado de ptrx: " << *x << "\nValor trocado de ptry: " << *y << endl;
	
	delete x;
	delete y;

	digite_valores(&*n1, &*n2); //Chamada da função que informar os novos valores das variáveis	
	cout << "Novo valor ptrx: " << *n1 << endl;
	cout << "Novo valor ptry: " << *n2 << endl;

	delete n1;
	delete n2;

	system("pause");
	return 0;
}

void calculadora(int n1, int n2, int *sum) {
*sum = n1 + n2;
}

void Maior(int n1, int n2, int *maior) {
	if (n1 > n2) {
		*maior = n1;
	}
	else {
		*maior = n2;
	}
}

void troca(int* ptrx, int* ptry) {
	int troc;
	troc = *ptrx ; *ptrx = *ptry; *ptry = troc;
}

void digite_valores(int *n1, int *n2) {
	cout << "Digite novo valor para ptrx: ";
	cin >> *n1;

	cout << "Digite novo valor para ptry: ";
	cin >> *n2;
}