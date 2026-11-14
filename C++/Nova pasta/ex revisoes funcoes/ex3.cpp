#include <iostream>

using namespace std;
int factorial(int n, int aux = 1 ){
    if(aux <n){

        return aux * factorial(n,aux+ 1);
    }
    return aux;

}

int  main(){
    cout << factorial(15);
return 0;
}

