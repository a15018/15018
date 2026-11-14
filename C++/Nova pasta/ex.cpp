#include <iostream>
using namespace std;
int soma_pares(int n, int aux = 2){
    if (aux > n) {
            return 0;
        }
    return aux + soma_pares(n, aux + 2);
}

int main (){
    int numero;

    cout <<  "Introduza um número inteiro positivo: ";
    cin >> numero;
    if (numero <0){
        cout << "\nnumero invalido";
    } else{
        cout << "A soma dos números pares é: " << soma_pares(numero);
    }





return 0;

}

