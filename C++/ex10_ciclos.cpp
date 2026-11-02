#include <iostream>

using namespace std;



int main () {
    int resultado = 0;
    int i;
    for (i = 1; i<=10; i++){
    resultado += i;
    }
    i =11;
    do{
        resultado -= i;
        i++;
    } while (i <=15);


    while (i <= 20){

        if (((i/2)*) == i){
            resultado /= i;
        }  else {
            resultado *= i;
        }
        i++;

    }
    cout << resultado;

    return 0;
}

/* for
    while
    do.while
        1 somar desde de o n1 ao numero 10 (incluindo 1 e 10)
        2 - subtraia desde 0 11 ao 15(incluindo 11 e 15)
        3 - multiplique  ou divida desde o 16 a0 20 (incluindo o 16 e 20)
            - se for par divide se for impar multiplica

            */
