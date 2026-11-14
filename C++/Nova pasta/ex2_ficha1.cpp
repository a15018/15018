#include <iostream>
using namespace std;

int main() {
    int nota;

    do {
        cout << "Introduz uma nota entre 0 e 20: ";
        cin >> nota;
    } while (nota < 0 || nota > 20);

    cout << "Nota valida: " << nota << endl;

    return 0;
}
