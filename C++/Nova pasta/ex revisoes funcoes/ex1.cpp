#include <iostream>

using namespace std;

bool ehprimo(int n, bool primo = true){

    if(n>1){
        for(int i = 2 ; i<n; i++){
            if(n % i == 0){
                primo = false;
                break;
            }
        }
    }
    return primo;

}

int contar_primos(int limite, int aux = 0){


    for(int i=2; i<limite;i++){
        if(ehprimo(i) == true){
            aux++;
        }
    }
    return aux;
}


int  main(){

    cout << ehprimo(2) << endl;
    cout << contar_primos(20);

return 0;
}
