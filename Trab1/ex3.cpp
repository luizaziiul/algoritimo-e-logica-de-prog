#include <iostream>

using namespace std;

int main() {
    
    int n1,n2;
    
    cout << "escreva dois numeros: ";
    cin >> n1 >> n2;
    
    if (n1 < n2){
        cout << n1 << " menor que " << n2;
    }else if (n2 < n1){
        cout << n2 << " menor que " << n1;
    }else{
        cout << "os numeros sao iguais";
    }
    
	return 0;
}
