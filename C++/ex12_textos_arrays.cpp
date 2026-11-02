#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char nome[31], primeira_letra = ' ', segunda_letra = ' '; // até 30 letras + o '\0'
    printf("Nome: ");
    cin.getline(nome, 31); // à moda do C++
    printf("\nOla, %s!\n", nome);

    printf("\nOla, %c!\n", nome[0]);

    cout << "\nOla, " << nome[0] << " !\n";

    primeira_letra = nome[0];

    for(int i = 0; i<31; i++){

        if (nome[i] == ' '){

            segunda_letra = nome[i+1];

    }

    cout << "\n Letras: " << primeira_letra << segunda_letra;
    return 0;
}



