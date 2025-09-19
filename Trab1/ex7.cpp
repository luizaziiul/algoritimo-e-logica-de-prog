#include <iostream>
using namespace std;

int main () {
    float salario;
    
    cout << "Informe seu salário em R$: ";
    cin >> salario;
    
    if (salario < 500) {
    cout<< "Com o reajuste, seu salário passará a ser R$:" << (salario * 1.3) << endl; 
    } else {
        cout << "Você não recebeu reajuste." << endl;
    }
    return 0;
    
}
