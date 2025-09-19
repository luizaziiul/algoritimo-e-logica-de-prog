#include <iostream>
using namespace std;
int main()
{
    int idade;
    string cat; //categoria
    cout << "Informe a idade do nadador: ";
    cin >> idade;
    
    if (idade < 5) {
        cout << "Nessa idade nao eh permitido nadar!!";
    } else if (idade >= 5 and idade <= 7) {
        cat = "Infantil";
        cout << "A categoria do nadador eh: " << cat << endl;
    } else if (idade >= 8 and idade <= 10){
        cat = "Juvenil";
        cout << "A categoria do nadador eh: " << cat << endl;
    } else if (idade >= 11 and idade <= 15) {
        cat = "Adolescente";
        cout << "A categoria do nadador eh: " << cat << endl;
    } else if (idade >= 16 and idade <= 30) {
        cat = "Adulto";
        cout << "A categoria do nadador eh: " << cat << endl;
    } else if (idade > 30){
        cat = "Senior";
        cout << "A categoria do nadador eh: " << cat << endl;
    }
    
    return 0;
}
