#include <iostream>

using namespace std;

int funcao(int n){
    return funcao(n - 1) + funcao(n);

}
int main (){
    int num;

    cout << "numero ";
    cin >> num;

    cout << funcao(num);

return 0;

}

