#include <iostream>
#include <stdio.h>
using namespace std;

const int LINHAS = 6;
const int COLUNAS = 9;

void mostrar_tabuleiro(string arr[LINHAS][COLUNAS]);
int pede_peca_jogador();
void coloca_peca_tabuleiro(string peca, int linha, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiro_cheio(string arr[LINHAS][COLUNAS]);
bool ganhou_jogo (int &quem_ganhou, string arr[LINHAS][COLUNAS]);

int main(){
        string tabuleiro[LINHAS][COLUNAS];

        tabuleiro[0][1] = "s";
        mostrar_tabuleiro(tabuleiro);
        mostrar_tabuleiro(tabuleiro);

    return 0;
}

void mostrar_tabuleiro(string arr[LINHAS][COLUNAS]){
    cout << "\nlinhas 1: colunas 2: -" << arr[0][1] << "-";
    arr[0][1] = "a";
}
