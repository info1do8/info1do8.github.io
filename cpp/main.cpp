#include <iostream>

using namespace std;

int i, liczby[5];
float sr, suma=0;

int main()
{
    cout << "obliczam srednia liczb: "<<endl;
    for (i=0;i<5;i++){
        cout <<"Podaj liczbe nr : "<<i+1<<endl;
        cin >> liczby[i];
        suma+=liczby[i];
    }
    sr=suma/5;
    cout << "suma wynosi "<<suma<<endl;

    cout << "srednia wynosi "<<sr<<endl;

    return 0;
}
