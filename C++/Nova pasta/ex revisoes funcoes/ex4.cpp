#include <iostream>

using namespace std;
void contar(int n) {
    if (n < 0) return;

    cout << n << endl;
    contar(n - 1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    contar(1);

    for (int i = 2147483647; i >= 0; i--) {
        cout << i << endl;
    }


return 0;
}
