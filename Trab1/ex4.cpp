#include <iostream>
using namespace std;

int main(){

    float n1, n2, n3;
    cout << "Informe os 3 numeros: ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 and n1 > n3) {
        cout << n1 << " é maior que " << n2 << " e " << n3;
    } else if (n2 > n1 and n2 > n3) {
        cout << n2 << " é maior que " << n1 << " e " << n3;
    } else {
        cout << n3 << " é maior que " << n1 << " e " << n2;
    }

    return 0;
}
