#include <iostream>

using namespace std;

int main(){

int numero;

cout << "Digite um numero inteiro positivo:";
cin >> numero;

int fatorial = 1;

for(int i = 1; i <= numero; i++){
fatorial *= i;
}

cout << "O fatorial de" << numero << "é" << fatorial << endl;

}