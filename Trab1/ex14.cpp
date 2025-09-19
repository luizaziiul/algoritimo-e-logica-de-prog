#include <iostream>
using namespace std;

int main() {
    
    double salario, novoSalario, percentual;
    
    cout << "Informe seu salario atual: R$ ";
    cin >> salario;
    
    if (salario <= 300) {
        percentual = 0.50;
    } else if (salario <= 500) {
        percentual = 0.40;
    } else if (salario <= 700) {
        percentual = 0.30;
    } else if (salario <= 800) {
        percentual = 0.20;
    } else if (salario <= 1000) {
        percentual = 0.10;
    } else {
        percentual = 0.05;
    }
    
    novoSalario = salario + (salario * percentual); 
    
    cout << "Percentual do aumento: " << percentual * 100 << "%" << endl;
    cout << "Seu novo salario eh de: R$ " << novoSalario << endl;

    return 0;
}
