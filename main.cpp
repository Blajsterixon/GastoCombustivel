#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Apenas para Gasolina, Alcool e Diesel;

int main()
{   cout << fixed << setprecision(2);

    char c;
    float valor=0.0, dist=0.0, autonomia=6.0, vfinal=0.0;

    cout << "Insira a inicial do combustivel: \n";
    cout << "Ex: G (Gasolina), A (Alcool) e D (Diesel) \n";

    cin >> c;

//    if (c!='g' || c!='G' || c!='a' || c!='A' || c!='d' || c!='D'){
//        cout << "Insira um combustivel valido!\n";
//        cin >> c;
//    }

    cout << "Insira quanto esta o litro do combustivel: \n";

    cin >> valor;

    cout << "Insira a distancia em Km: \n";

    cin >> dist;

    if(c=='g' || c=='G'){
        autonomia = 7.0;
        vfinal = (dist/autonomia) * valor;
    }

    else if(c=='a' || c=='A'){
        autonomia = 5.0;
        vfinal = (dist/autonomia) * valor;
    }

    else if(c=='d' || c=='D'){
        autonomia = 8.0;
        vfinal = (dist/autonomia) * valor;
    }

    cout << "O valor final e: \n";
    cout << "R$"<< vfinal << endl;

    return 0;
}
