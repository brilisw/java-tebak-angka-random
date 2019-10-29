#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    char ulang = 'y';
    string nama;
    int nilai;
    int Stat ;
    int angka;
    int nyawa = 3 ;

    srand(static_cast<unsigned int>(time(0)));


        cout << "masukan Maksimal nilai (10 - 100) : ";
        cin >> nilai;

        cout << "\nSilahkan tebak angka dari 0 sampai ";
        cout << nilai ;



        angka = (rand() % nilai + 1);




        cout << "\nCheat : ";
        cout << angka;



        while (Stat != angka){
        cout<< "\nmasukan Tebakan anda : ";
        cin >> Stat;
        if (Stat == angka)
        {
            cout << "selamat tebakan anda benar";
            return 0;
        }
        if (Stat != angka)
        {
            cout << " tebakan anda salah ";
            nyawa = nyawa -1 ;
            cout << " \n  nyawa : ";
            cout << nyawa;

                if (nyawa == 0)
            {
                cout << "game over";
                return 0;
            }
        }




    }
    return 0;
}
