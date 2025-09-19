#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float n1, n2, operacao;
    
    cout << "Informe dois numeros: ";
    cin >> n1 >> n2;
    
    
    cout << "Escolha uma operacao: " << endl;
    cout << "1 - O primeiro numero elevado ao segundo numero." << endl;
    cout << "2 - Raiz quadrada dos numeros." << endl;
    cout << "3 - Raiz cubica dos numeros." << endl;
    cin >> operacao;
    
    if (operacao ==1) {
        cout << "O seu primeiro numero elevado pelo segundo eh: " 
        << pow(n1, n2) << endl;
    } else if (operacao == 2) {
        cout << "A raiz quadrada de seus numeros sao: " << (sqrt(n1)) << endl;
        cout << "A raiz quadrada de seus numeros sao: " << (sqrt(n2)) << endl;
    } else if (operacao == 3) {
        cout << "A raiz cubica de seus numeros sao: " << (cbrt(n1)) << endl;
        cout << "A raiz cubica de seus numeros sao: " << (cbrt(n2)) << endl;
    }
 
    return 0;
}
