#include <iostream>
using namespace std ; 

int main(){
    float preco;
    int cod_origem;
  
    cout << "informe o preco " ;
    cin >> preco;  
    cout << " informe o codigo de origem " << endl ; 
    cin >> cod_origem;
  
         if (cod_origem == 1)
            cout <<  "Sul" << endl ;
        else if (cod_origem == 2 )
            cout<< "Norte" ;
        else if (cod_origem == 3)
            cout<< " Leste" ; 
        else if (cod_origem ==  4)
            cout<< "Oeste" ; 
        else if (cod_origem ==  5 or cod_origem == 6)
            cout<< "Nordeste" ;
        else if (cod_origem == 7 or cod_origem == 8 or cod_origem == 9)
            cout<< "Sudeste" ; 
        else if (cod_origem >=10 and cod_origem <=20)
            cout << "CentroOeste";
        else if (cod_origem >= 21 and cod_origem <=30 )
            cout<< "Nordeste" ;
        else cout << "digite algo valido" << endl; 

    return 0;
}
