#include <iostream>

using namespace std;

int main() {
    
    float n1, n2, media;
    string msg;
    
    cout << "informe suas 2 notas:";
    cin >> n1 >> n2;
    
    media = (n1+n2)/2;
    
    if (media >= 0 and media <3){
        msg =  "Foi reprovado";
    }else{
        if (media >=3 and media < 7){
            msg = " Ficou de exame";
            
        }else {
            msg =  "Foi aprovado";
        }
        cout << "Sua media eh: " << media << "\nStatus: " << msg << endl;
    }
    

	return 0;
}
}

