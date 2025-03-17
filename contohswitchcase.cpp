#include <iostream>
using namespace std;

double hitungIpk(double
                     total,
                 int sks)
{
    return total / sks;
}

string predikat(double Ipk)
{
    if (Ipk < 10)
    {
        return "Memuaskan";
    }
    else
    {
        return "Cumlaude";
    }
}
int main()
{
    char pilihan;
    int sks;
    double total;

    do
    {
        cout << "pilih Menu" << endl;
        cout << "1. cek nilai Ipk" << endl;
        cout << "2. cek predikat kelulusan" << endl;
        cout << "3. Keluar";

        cout << "masukan pilihan (1/2/3) : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case '1':
            int sks;
            double total;
            cout << "masukan total nilai = ";
            cin >> total;
            cout << "masukan jumlah sks = ";
            cin >> sks;

            cout << "nilai ipk = " < hitungIpk(total, sks);
            break;
        case '2':
            cout << "predikat anda adalah" << predikat(hitungIpk(total, sks));
            << endl;
            break;

        case '3':
            break;

        default:
            cout << "pilihan anda salah" endl;
            break;
        }

    } while (pilihan != 3);
}