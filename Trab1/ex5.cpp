#include <iostream>
using namespace std;

int main() {
    float n1, n2, operacao;
    
    cout << "Informe dois numeros: ";
    cin >> n1 >> n2;
    
    cout << "Escolha uma operação: " << endl;
    cout << "1 - Média entre os números escolhidos." << endl;
    cout << "2 - Diferença entre o maior número para o menor." << endl;
    cout << "3 - Multiplicação dos números." << endl;
    cout << "4 - Divisão do primeiro número pelo segundo número." << endl;
    cin >> operacao;
    
    if (operacao == 1) {
    cout << "Sua média é: " << (n1 + n2) / 2 << endl;
    } else if (operacao == 2) {
      if (n1 > n2) {
      cout << "A subtração do maior pelo menor é: " << (n1 - n2) << endl;
    }  else { 
        cout << " A subtração do maior pelo menor é: " << (n2 - n1) << endl;
    }
      } else if (operacao == 3) {
        cout << "A multiplicação dos números é: " << (n1 * n2) << endl;
    } else if (operacao == 4) {
      if (n2 !=0) { 
      cout << "A divisão do primeiro pelo segundo é: " << (n1 / n2) << endl;
    } else {
        (n2 = 0);
        cout << "Não é possível dividir" << endl;
    }
    
    }
    return 0;
}
