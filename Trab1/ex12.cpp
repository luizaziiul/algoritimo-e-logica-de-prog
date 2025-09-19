#include <iostream>
using namespace std;

int main() {
    double salario_b, gratificacao, desconto, novoSalario;
    
    cout << "Informe seu salario bruto: R$ ";
    cin >> salario_b;
    
    if (salario_b <= 350) {
        gratificacao = 100.00;
    } else if (salario_b <= 600) {
        gratificacao = 75.00;
    } else if (salario_b <= 900) {
        gratificacao = 50.00;
    } else {
        gratificacao = 35.00;
    }
    
    desconto = salario_b * 0.07; 
    novoSalario = salario_b + gratificacao - desconto;
    
    cout << "Salario a receber: R$ " << novoSalario << endl;
    cout << "Sua Gratificacao eh de: R$ " << gratificacao << endl;
    cout << "Seu desconto foi de: R$ " << desconto << endl;
    
    return 0;
}
