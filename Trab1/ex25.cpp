#include <iostream>
using namespace std;

int main() {
  
    int horas, grati, falta, horasE;
    cout << "Informe as horas extras e horas falta que o funcionario teve no ano: ";
    cin >> horas >> falta;
    
    horasE = horas - (falta/3 * 2);
    
    if (horasE >= 2400) {
        grati = 500;
    } else if (horasE < 2400 and horasE >= 1800) {
        grati = 400;
    } else if (horasE < 1800 and horasE >= 1200) {
        grati = 300;
    } else if (horasE < 1200 and horasE >= 600) {
        grati = 200;
    } else if (horasE < 600) {
        grati = 100;
    }
    
    cout << "O valor do seu premio eh: R$" << grati << ",00"<< endl;
  
    return 0;
}
