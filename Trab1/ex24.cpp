#include <iostream>

using namespace std;

int main() {
    int preco, aumento, impo, cat;
    string situ, classi;
    
    cout << "Situacao R para produtos refrigerados e N para nao refrigerados" << endl;
    cout << "Informe o preco, a categoria, e a situacao: ";
    cin >> preco >> cat >> situ;
    
    if (preco <= 25) {
        if (cat == 1) {
            aumento = preco * 0.05;
        } else if (cat == 2) {
            aumento = preco * 0.08;
        } else if (cat == 3) {
            aumento = preco * 0.1;
        }
    } else if (preco > 25) {
        if (cat == 1) {
            aumento = preco * 0.12;
        } else if (cat == 2) {
            aumento = preco * 0.15;
        } else if (cat == 3) {
            aumento = preco * 0.18;
        }
    }
    
    preco = preco + aumento;
    
    cout << "O aumento foi: " << aumento << endl;
    
    if (cat == 2 || situ == "R") {
        impo = preco * 0.05;
        preco = preco + impo;
    
    } else {
        impo = preco * 0.08;
        preco = preco + impo;
    }
    
    cout << "O imposto foi: " << impo << "\nO novo preco eh: " << preco << endl;
    
    if (preco <= 50) {
         classi = "Barato";
    } else if (preco > 50 and preco < 120) {
        classi = "Normal";
    } else if (preco >= 120) {
        classi = "Caro";
    }
    cout << "A classificacao do produto eh: " << classi << endl;
    return 0;
}
