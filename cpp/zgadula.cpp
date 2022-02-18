#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int cel, i, liczba;
int main()
{
    srand(time(NULL)); //pobiera liczbę sekund od 1970r
    cel= rand()%100+1; //reszta z dzielenia to 0-99, ale +1
    cout << "Zgadnij jaka to liczba od 1 do 100..." << endl;
    cout<<"strzelaj!" << endl;
    cin>> liczba;
    if (liczba<1||liczba>100) cout <<"Wybierz z podanego zakresu (1-100)"<<endl;
    else {
    cout<<"czy to liczba "<< liczba << "?"<<endl;
    cout<<"nie, to " << cel << " :)"<< endl;
    }
    return 0;
}
