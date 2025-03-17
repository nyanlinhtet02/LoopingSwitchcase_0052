#include<iostream>

using namespace std;

int main ()
{

int n;
    int perulanganWhile = 0;
    int perulanganDo = 0;
    cout << "Perulangan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << " Selamat Datang" << endl;

    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

    cout << "Perulangan while" << endl;
    srand(time(0));

    n = rand() % 10;

    cout << "Nilai awal n = " << n << endl;

    while (n < 7)

}
