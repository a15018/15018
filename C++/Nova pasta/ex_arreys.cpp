#include <iostream>
#include <stdio.h>
#define N 5

using namespace std;

int main() {
    int numeros[N], soma = 0;

    // 1. Criar o ciclo for

    for(int i = 0; i<=N; i++){
        // 2. Pedir um número
        cout << " nota " << i<< " ";
        cin >> numeros[i];
        soma = soma + numeros[i];
    }
    // 5. Mostrar a soma e a média
    cout << "media = " << (float(soma)/5.0);

    return 0;
}
