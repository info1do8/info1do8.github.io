#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <conio.h> // zeby wybieranie bez wciskania enter było

using namespace std;

int cel, i=1, liczba;
char odp;   // też do wybierania bez enter

int main()
{
    srand(time(NULL)); //pobiera liczbe sekund od 1970r

    cout << "Zgaduj zgadula, jaka to liczba?" << endl;

    while (true){
        cel= rand()%100+1; //reszta z dzielenia to 0-99, ale +1

        cout<<"Strzelasz? "<< endl;
        cout << "1) TAK" << endl;
        cout << "2) NIE" << endl;
        cout << "3) koniec"<< endl;
        odp=getch(); //bierze znak z klawiatury

        switch(odp) { // switch może byc int lub char
            // case '3' apostrofy, bo to juz znak jest
            case '3': { cout <<"To pa!"<<endl; exit(0);}
            case '2': { cout<<"Zmieniles zdanie? Wcisnij ENTER."<<endl; break;}
            case '1': {

            while (liczba!=cel) {
                if (liczba<1||liczba>100) cout <<"Wybierz z podanego zakresu (1-100)"<<endl;
                else {
                        if (liczba>cel) cout <<"za duzo, strzelaj dalej: "<<endl;
                        else cout <<"za malo, strzelaj dalej: "<<endl;
                    i++;
                }
                cin>> liczba;
            }
        cout<<"TAK!!! Udalo Ci sie zgadnac po "<<i<<" probach."<<endl;
        //system("pause"); //stopuje, gdy .cpp uruchamiamy
            break;
            }
            default: {cout<<"nie ma takiej opcji"<<endl; break;}
        }
        getchar();
        system("cls");
    }

    return 0;
}
