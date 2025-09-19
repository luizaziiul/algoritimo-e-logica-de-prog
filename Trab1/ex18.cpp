#include <iostream>
using namespace std;

int main() {
    int idade;
    
    cout << "Informe a sua idade: ";
    cin >> idade;
    
    if (idade < 18) {
        cout << "Você eh menor de idade!" << endl;
    } else {
        cout << "Você eh maior de idade!" << endl;
    }

    return 0;
}
