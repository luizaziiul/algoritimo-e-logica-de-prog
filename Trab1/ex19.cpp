#include <iostream>
using namespace std;

int main() {
    char sexo;
    double altura, pesoIdeal;

    cout << "Digite a altura (em metros): ";
    cin >> altura;

    cout << "Digite o sexo (M para masculino, F para feminino): ";
    cin >> sexo;

    if (sexo == 'M') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        cout << "\nSexo invalido!" << endl;
        return 0; 
    }
    
    cout << "Peso ideal: " << pesoIdeal << " kg" << endl;

    return 0;
}
