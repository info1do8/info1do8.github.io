#include <iostream>

using namespace std;

int kwota, cena;

int main()
{
    cout << "Podaj kwotę jaką dysponujesz (pełne zł): "<< endl;
    cin >> kwota;
    while (kwota >0) 
      { 
      cout <<"Podaj cenę: "<<endl;
        cin >> cena;
        kwota=kwota-cena;
        cout << "Pozostało Ci "<< kwota <<endl;
     }
    
    cout << "nie możesz już kupować"<<endl;

    return 0;
}
