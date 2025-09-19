#include <iostream>
using namespace std;

int main() {
   int codigo;
   double preco, desconto, novoPreco, percentual;
   
   cout << "Informe o codigo do produto: ";
   cin >> codigo;
   
   cout << "Informe o preco do produto: R$ ";
   cin >> preco;
   
   if (preco <= 30) {
       percentual = 0.0;
   } else if (preco <= 100) {
       percentual = 0.10;
   } else {
       percentual = 0.15;
   }
   
   desconto = preco * percentual; 
   novoPreco = preco - desconto;
   
   cout << "Percentual de desconto: " << percentual * 100 << "%" << endl;
   cout << "Codigo do produto: " << codigo << endl;
   cout << "Valor do desconto: R$ " << desconto << endl;
   cout << "Preco corrigido: R$ " << novoPreco << endl;
   
   
    return 0;
}
