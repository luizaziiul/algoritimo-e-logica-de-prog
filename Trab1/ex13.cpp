#include <iostream>
using namespace std;

int main() {
    double preco, novoPreco;
    double percentual;

    cout << "Digite o preco do produto: R$ ";
    cin >> preco;

    //  (Tabela 1)
    if (preco <= 50) {
        percentual = 0.05;
    } else if (preco <= 100) {
        percentual = 0.10;
    } else {
        percentual = 0.15;
    }
    
    novoPreco = preco + (preco * percentual);

    //  (Tabela 2)
    string classificacao;
    if (novoPreco <= 80) {
        classificacao = "Barato";
    } else if (novoPreco <= 120) {
        classificacao = "Normal";
    } else if (novoPreco <= 200) {
        classificacao = "Caro";
    } else {
        classificacao = "Muito caro";
    }

    cout << "Novo preco: R$ " << novoPreco << endl;
    cout << "Classificacao: " << classificacao << endl;

    return 0;
}
