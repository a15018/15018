#include <iostream>
using namespace std;

const int N = 23;

int main (){
    int a;
    char nome[N];
    int vezes[26] = {0};

    cout << "me de seu nome ";

    cin >> nome;

    for(int i = 0; i<N; i++){

        char letras = nome[i];

        if (letras >= 'a' && letras <= 'z'){
            vezes[letras -'a']++;
        }
    }

    for(int j = 0; j<26; j++){
        if(vezes[j] > 0){
            cout << char(j + 'a') << " - " << vezes[j] << endl;
        }
    }

return 0;

}

