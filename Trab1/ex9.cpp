#include <iostream>
using namespace std;

int main() {
    float saldo_medio;

    cout << "Informe seu saldo medio: ";
    cin >> saldo_medio;

    if (saldo_medio > 400) {
        cout << "Seu saldo medio eh: " << saldo_medio << " e " << "seu credito eh de: " << saldo_medio * 0.3 << endl;
    } else if (saldo_medio <= 400 && saldo_medio > 300) {
        cout << "Seu saldo medio eh: " << saldo_medio << " e " << "seu credito eh de: " << saldo_medio * 0.25 << endl;
    } else if (saldo_medio <= 300 && saldo_medio > 200){
        cout << "Seu saldo medio eh: " << saldo_medio << " e " << "seu credito eh de: " << saldo_medio * 0.2 << endl;
    } else if (saldo_m <=200) {
        cout << "Seu saldo medio eh: " << saldo_medio << " e " << "seu credito eh de: " << saldo_medio * 0.1 << endl;
    }
 
    return 0;
}
