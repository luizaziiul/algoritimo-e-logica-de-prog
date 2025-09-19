#include <iostream>
using namespace std;
int main() {
    float c_fabrica;

    cout << "Informe o custo de fabrica: ";
    cin >> c_fabrica;

    if (c_fabrica <= 12000) {
        cout << "Preco ao consumidor: " << c_fabrica * 05 << endl;
    } else if (c_fabrica > 12000 and c_fabrica <= 25000) {
        cout << "Preco ao consumidor: " << c_fabrica * 1.0 * 1.15 << endl;
    } else if (c_fabrica > 25000) {
        cout << "Preco ao consumidor: " << c_fabrica * 1.15 * 1.20 << endl;
    }
    return 0;
}
