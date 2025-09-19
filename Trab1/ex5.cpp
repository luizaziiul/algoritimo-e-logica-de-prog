#include <iostream>
using namespace std;

int main() {
    float n1, n2, operacao;
    
    cout << "Informe dois numeros: ";
    cin >> n1 >> n2;
    
    cout << "Escolha uma operacao: " << endl;
    cout << "1 - Media entre os numeros escolhidos." << endl;
    cout << "2 - Diferenca entre o maior numero para o menor." << endl;
    cout << "3 - Multiplicacao dos numeros." << endl;
    cout << "4 - Divisao do primeiro numero pelo segundo numero." << endl;
    cin >> operacao;
    
    if (operacao == 1) {
    cout << "Sua media eh: " << (n1 + n2) / 2 << endl;
    } else if (operacao == 2) {
      if (n1 > n2) {
      cout << "A subtracao do maior pelo menor eh: " << (n1 - n2) << endl;
    }  else { 
        cout << " A subtracao do maior pelo menor eh: " << (n2 - n1) << endl;
    }
      } else if (operacao == 3) {
        cout << "A multiplicacao dos numeros eh: " << (n1 * n2) << endl;
    } else if (operacao == 4) {
      if (n2 !=0) { 
      cout << "A divisao do primeiro pelo segundo eh: " << (n1 / n2) << endl;
    } else {
        (n2 = 0);
        cout << "Nao eh possivel dividir" << endl;
    }
    
    }
    return 0;
}
