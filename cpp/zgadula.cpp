#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int cel, i=1, liczba;
int main()
{
    srand(time(NULL)); //pobiera liczbê sekund od 1970r
    cel= rand()%100+1; //reszta z dzielenia to 0-99, ale +1
    cout << "Zgaduj zgadula, jaka to liczba?" << endl;
    cout<<"Strzelaj! ";
        while (liczba!=cel) {
            if (liczba<1||liczba>100) cout <<"Wybierz z podanego zakresu (1-100)"<<endl;
            else {
                    if (liczba>cel) cout <<"za duzo, strzelaj dalej: "<<endl;
                    else cout <<"za malo, strzelaj dalej: "<<endl;
                i++;
            }
            cin>> liczba;
        }
    cout<<"TAK!!! Udalo Ci sie zgadn¹æ po "<<i<<" probach."<<endl;
    //system("pause"); //stopuje, gdy .cpp uruchamiamy

    return 0;
}
