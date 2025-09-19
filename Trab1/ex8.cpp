#include <iostream>
using namespace std;

int main () {
    float salario;
    
    cout << "Informe seu salario em R$";
    cin >> salario;
    
    if (salario > 300) {
    cout<< "Com o reajuste, seu salario passara a ser R$:" << (salario * 1.15) << endl; 
    } else {
    cout << "Com o reajuste, seu salario passara a ser R$:" << (salario * 1.35) << endl;
    }
    return 0;
    
}
