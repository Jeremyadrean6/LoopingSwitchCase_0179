#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int perulanganwhile = 0;
    int perulangan = 0;

    //perulangan dengan for

    cout << "perulangan for pencecah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "nilai n = " << n << " selamat datang " << endl
    }
    cout << "nilai n terakhir = " << n << endl;
    cout << endl;

    cout << "perulangan for pencacah turun " << endl;
    // perulangan dengan for
    for (n = 5; n > 0; n--)
    {
        cout << "nilai n = " << n << " selamat datang " << endl;
    }
    cout << nilai n terakhir = << n;
    cout << endl;

    cout << "perulangan while " endl;

    srand(time(0));

    n = rand() % 10;
    
    cout << "nilai awal n = " << n << endl;

    while (n < 7)
    {
        cout << "nilai n = " << n << endl;
        n = rand () % 10;
        perulanganwhile++;
    }
    cout << "jumlah perulangan = " << perulanganwhile << endl;
    cout << "nilai n terakhir = " << n << endl;

} 
