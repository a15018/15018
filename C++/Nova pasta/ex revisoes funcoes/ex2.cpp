#include <iostream>

using namespace std;

double  media(int n[] , int tamanho){
    int soma =0;
    if(tamanho==0){
        return 0;
    }else{

        for(int i =0; i<tamanho; i++){

             soma += n[i] ;
        }


    }
    return (double) soma/tamanho;

}

int contar_acima(int n[],int tamanho){
    int m = media(n,tamanho);
    int aux;
    for(int i =0; i < tamanho; i++){
        if(n[i] > m ){
            aux++;
        }
    }
    return aux;
}


int  main(){
    int n = 5;
    int arra[] = {5,8,1,12,2};

    cout << media(arra,n) << endl;
    cout << contar_acima(arra, 4);

return 0;
}

