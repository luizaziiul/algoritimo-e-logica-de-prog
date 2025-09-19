#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int idade, peso;
	
	cout << "qual seu peso: ";
	cin >> peso;
	cout << "qual sua idade: ";
	cin >>  idade;
	
	if (idade < 20 && peso < 60) {
		cout << " pertecente ao grupo 9" << endl;
	}	else if (idade < 20 && peso >=60 && peso <=90) {
		cout << "pertence ao  grupo 8" << endl;
	} else if ( idade < 20 && peso >90) {
		cout << "pertence ao grupo 7" << endl;
	} else if (idade > 20 and idade < 50 && peso <60) {
		cout << "pertence ao grupo 6" << endl;
	} else if ( idade > 20 and idade < 50 && peso >= 60 && peso <=90) {
		cout << "pertence ao grupo 5" << endl;
	} else if (idade > 20 and idade < 50 && peso > 90) {
		cout << "pertence ao grupo 4" << endl;
	} else if (idade > 50 && peso < 60) {
		cout << "pertence ao grupo 3" << endl;
	} else if (idade > 50 && peso > 60 and peso <= 90 ) {
		cout << "pertence ao grupo 2" << endl;
	} else if (idade > 50 && peso > 90) {
		cout << "pertence ao grupo 1" << endl;
	}

	return 0;
}
