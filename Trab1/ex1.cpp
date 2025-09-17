#include <iostream>

using namespace std;

int main() {

	int n1, n2, n3, media;

	cout << "digite suas notas: ";
	cin >> n1 >> n2 >> n3;

	media = (n1*2 + n2*3 + n3*4)/10;
	cout << "media ponderada: ", media;

	if (media >= 8 and media <= 10) {
		cout << "obteve conceito A";
	} else if (media >= 7 and media < 8 ) {
		cout << "obteve conceito B";
	} else if (media >= 6 and media < 7) {
		cout << "obteve conceito C";
	} else if (media >= 5 and media < 6) {
		cout << "obteve conceito D";
	} else if (media >= 0 and media < 5) {
		cout << "obteve conceito E";
	}

	return 0;
}