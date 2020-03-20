#include <iostream>
#include <string.h>


using namespace std;


struct osoba {
    string imie;
    string nazwisko;
    int klasa;
};

int main()
{
    osoba uczniowie[3]; 

    for (int i = 0; i<3; i++)
    {
        
        cout << "Podaj imie ucznia " << i+1 << endl;
        cin >> uczniowie[i].imie;
        
        cout << "Podaj nazwisko ucznia " << i+1 << endl;
        cin >> uczniowie[i].nazwisko;
        
        cout << "Podaj klase ucznia " << i+1 << endl;
        cin >> uczniowie[i].klasa;
    }

    for (int i = 0; i<3; i++)
    {
       
        cout <<"imie: "<< uczniowie[i].imie << endl;
        cout <<"nazwisko: "<<uczniowie[i].nazwisko << endl;
        cout << "klasa: "<<uczniowie[i].klasa << endl;
    }

    system("pause >nul");

    return 0;
}
