#include <iostream>
using namespace std;

int main() {
    int senha;
    
    cout << "Digite a senha para login: ";
    cin >> senha;
    
    if (senha == 4531) {
        cout << "Acesso permitido! Bem-vindo." << endl;
    } else {
        cout << "Acesso negado." << endl;
    }
    return 0;
}
