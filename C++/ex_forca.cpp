#include <iostream>
#include <string.h>

using namespace std;


const int N = 10;

int num_tentativas = 5;

void mostrar_grelha (char pl[N]){

    cout << "\n";
    for (int i = 0; i <N; i++){
        if (pl[i] != ' '){
            cout << "_ ";
        }
    }

}


int main(){
    bool ganhou = false;
    char letra;
    char palavra[N] = {'C', 'A', 'S', 'A', ' ', ' ', ' ', ' ', ' ', ' '};


    while (num_tentativas >0){
        mostrar_grelha(palavra);

        cout << "\nRestam " << num_tentativas << " tentativas";
        cout << "\ndiga a letra que queres verificar : ";
        cin >> letra;

        num_tentativas--;
    }
    cout << "\n--------------------------------------";
    if(ganhou){
        cout << "\nParabens .. ganhaste!";
    } else {
        cout << "\n\nEs um nabo a portugues. perdeste.";
    }


return 0;
}



