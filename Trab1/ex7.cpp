#include <iostream>
using namespace std;

int main () {
    float salario;
    
    cout << "Informe seu salario em R$: ";
    cin >> salario;
    
    if (salario < 500) {
    cout<< "Com o reajuste, seu salario passara a ser R$:" << (salario * 1.3) << endl; 
    } else {
        cout << "Voce nao recebeu reajuste." << endl;
    }
    return 0;
    
}
