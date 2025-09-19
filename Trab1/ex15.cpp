#include <iostream>
using namespace std;

int main() {
    int tipo;
    double valor, rendimento, novoValor;
    
    cout << "Informe o tipo de investimento: (1 - Poupanca, 2 - Renda Fixa). ";
    cin >> tipo;
    
    cout << "Informe seu valor que deseja investir: R$ ";
    cin >> valor; 
    
    if (tipo == 1) {
        rendimento = 0.03;
    } else if ( tipo == 2) {
        rendimento = 0.04;
    } else {
        cout << "Tipo de investimento invalido!" << endl;
        return 0;
    }
    
    novoValor = valor + (valor * rendimento);
    
    cout << "\nValor investido: R$ " << valor << endl;
    cout << "Rendimento aplicado: " << rendimento * 100 << "%" << endl;
    cout << "Seu novo valor apos 1 mes sera de: R$ " << novoValor << endl;
    
    return 0;
}
