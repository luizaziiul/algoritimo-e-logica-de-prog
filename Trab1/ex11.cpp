#include <iostream>
using namespace std;

int main() {
     double salario, percentual, aumento, novoSalario;
    
    cout << "Informe seu salário atual: ";
    cin >> salario;
    
     if (salario <= 300) {
        percentual = 0.15;
    } else if (salario <= 600) {
        percentual = 0.10;
    } else if (salario <= 900) {
        percentual = 0.05;
    } else {
        percentual = 0.0;
    }
    
    aumento = salario * percentual;
    novoSalario = salario + aumento;
    
    cout << "Valor do aumento: R$ " << aumento << endl;
    cout << "Novo salario: R$ " << novoSalario << endl;
    
    return 0;
}
