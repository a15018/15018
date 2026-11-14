#include <iostream>

using namespace std;


void mostraMsg(){

    cout << "Sou mesmo hacker!..";



}

int soma2num(int n, int y){


    return n + y;
}

float divide2Num(float dividendo, float divisor){

    if(divisor== 0){
        return 0;
    } else{
        return dividendo / divisor;
    }

}

string pedeNome(){
    string  primeiro_nome, ultimo_nome;
    cout << "\nqual seu primeiro nome ";
    cin >> primeiro_nome;
    cout << "\nqual seu segundo nome ";
    cin >> ultimo_nome;


   return primeiro_nome + " " + ultimo_nome;

}

int main(){
    int primeiro, segundo;
    float dividendo, divisor;
    mostraMsg();
    cout << "\nme de dois numeros";
    cout << "\nprimeiro ";
    cin >> primeiro;

    cout << "segundo ";
    cin >> segundo;


    cout << soma2num(primeiro,segundo);

    cout << "\nme de dois numeros";
    cout << "\ndividendo ";
    cin >> dividendo;

    cout << "divisor ";
    cin >> divisor;

    cout << divide2Num(dividendo,divisor);

    cout << pedeNome();



}


