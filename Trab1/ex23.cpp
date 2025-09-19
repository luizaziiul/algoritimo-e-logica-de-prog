#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int cproduto,qntd,preco,total,desconto;
	
	cout << "informe o condigo e a quantidade";
	cin >> cproduto >> qntd ;
	
	if (cproduto <=10) {
		preco = 10;
		total = qntd * preco;
	} else if (cproduto > 10 and cproduto <= 20) {
		preco = 15;
		total = qntd * preco;	
	} else if (cproduto >= 21 and cproduto <= 30){
		preco = 20;
		total = qntd * preco;
	} else if (cproduto >= 31 and cproduto <= 40){
		preco = 30;
		total = qntd * preco;
	} else {
		cout << "Codigo invalido";
		return 1;
	}
	 if (total <= 250) {
	 	desconto = total * 0.05;
	 } else if (total >= 250 and total <= 500) {
	 	desconto=total * 0.1 ;
	 } else if (total > 500){
	 	desconto=total * 0.15;
	 }
 	
 	cout << "preco unitario : " << preco << "\ntotal: " << total << "\ndesconto: " << desconto << "\npreco com desconto: " << total - desconto << endl;
		
	return 0;
}
