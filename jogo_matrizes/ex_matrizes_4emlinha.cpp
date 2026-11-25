#include <stdio.h>
#include <iostream>
using namespace std;

// JOGO 4 EM LINHA //

const int LINHAS = 6;
const int COLUNAS = 9;

void preencheTabuleiro(string arr[LINHAS][COLUNAS]);
void mostraTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiroCheio(string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]);


int main() {
    string tabuleiro[LINHAS][COLUNAS];
    int quemJoga=2; // 1-X -1º jogar // 2-O -2ºjogar !
    int quemGanhou=0;
    int colunaJogar = 0;
    bool jogou = false;
    string peca = "x";
    preencheTabuleiro(tabuleiro);

    do {
        mostraTabuleiro(tabuleiro);
        colunaJogar = pedePecaJogador();

        if(quemJoga % 2 == 0){
            peca = "x";
        } else{
            peca = "o";
        }
        jogou = colocaPecaTabuleiro(peca, colunaJogar, tabuleiro);
        quemJoga++;
    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabuleiroCheio(tabuleiro));

    /*tabuleiro[0][1] = "s";
    mostraTabuleiro(tabuleiro);
    mostraTabuleiro(tabuleiro);*/

    return 0;
}

void preencheTabuleiro(string arr[LINHAS][COLUNAS]){
    for(int j = 0; j<COLUNAS; j++){
        for(int i = 0; i<LINHAS; i++){
            arr[i][j] = " ";
        }
    }
}

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {

    for(int j = LINHAS-1; j>=0; j--){
        cout << j+1;
        for(int i = 0; i<COLUNAS; i++){
            cout << " |" << arr[j][i] << "|";
        }
        cout << endl;
    }

    cout << " ";
    for(int i = 0; i<COLUNAS; i++){
        cout << " |" << i+1 << "|";
    }
    /*cout << "\nLinha 1: Coluna 2: -"  << arr[0][1] << "-";
    arr[0][1] = "a";*/
}

int pedePecaJogador() {
    int coluna,aux = 0;
    do{
        cout << "\ndiga uma coluna pra jogar(1 a 9): ";
        cin >> coluna;
        if(coluna <1 || coluna >9){
            cout<< "\nes um nabo\n\n";

        }


    }while(coluna <1 || coluna >9);
    coluna--;
    return coluna;

}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {

    for(int i = 0; i<6; i++){
        if (arr[5][coluna] != " "){
            cout << "\nEsta coluna esta cheia\n\n";
            return false;
        }
        if (arr[i][coluna] == " "){
            arr[i][coluna] = peca;
            return true;
        }
    }

    return false;
}

bool tabuleiroCheio(string arr[LINHAS][COLUNAS]) {
        if(arr[5][0]!=" " && arr[5][1]!=" " && arr[5][2]!=" " && arr[5][3]!=" " && arr[5][4]!=" " && arr[5][5]!=" "&& arr[5][6]!=" "&& arr[5][7]!=" "&& arr[5][8]!=" "){
            cout << "\ntabuleiro cheio\n";
            return true;
        }
    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {

    return false;
}





