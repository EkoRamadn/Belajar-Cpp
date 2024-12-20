#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>

using namespace std;

void menuUtama();
void buatLirik();
void memutarLagu();

int main()
{
    menuUtama();
    return 0;
}

void menuUtama()
{
    int opsi;

    cout << "+=======================+" << endl;
    cout << "PROGRAM TULIS LAGU      |" << endl;
    cout << "STUDIO TIB              |" << endl;
    cout << "+=======================+" << endl;
    cout << "\n";
    cout << " 1. Buat Lirik Lagu" << endl;
    cout << " 2. Putar Lirik Lagu" << endl;
    cout << "\n";
    cout << "+=======================+" << endl;
ulang:
    cout << "=> pilih opsi(1-2) : ";
    cin >> opsi;

    switch (opsi)
    {
    case 1:
        system("cls");
        buatLirik();
        break;
    case 2:
        system("cls");
        memutarLagu();
        break;

    default:
        cout << "anda memilih opsi yang salah." << endl;
        goto ulang;
        break;
    }
}

void buatLirik()
{
    string newLirik;

    cout << "+=======================+" << endl;
    cout << "TAMBAH LIRIK LAGU       |" << endl;
    cout << "+=======================+" << endl;
    cout << "\n";
    cout << "!] ";
    cin.ignore();
    ofstream file("newLirik.txt", ios::app);
    if (file.is_open())
    {
        getline(cin, newLirik);
        file << newLirik << "\n";
        file.close();
    }
    else
    {
        cerr << "terjadi error";
    }

    system("cls");
    menuUtama();
}

void memutarLagu()
{
    cout << "+=======================+" << endl;
    cout << "TAMBAH LIRIK LAGU       |" << endl;
    cout << "+=======================+" << endl;
    cout << "\n";
    ifstream file("newLirik.txt");
    if (file.is_open())
    {
        char ch;
        while (file.get(ch))
        {
            this_thread::sleep_for(chrono::milliseconds(50));
            cout << ch;
        }
        file.close();
    }
    else
    {
        cerr << "terjadi error";
    }
    cout << "\n";
    cout << "+=======================+" << endl;
    this_thread::sleep_for(chrono::seconds(3));
    system("cls");
    menuUtama();
}
/*
projek lirik lagu ::

>>MENU UTAMA
+=======================+
PROGRAM TULIS LAGU      |
STUDIO TIB              |
+=======================+

1. Buat Lirik Lagu
2. Putar Lirik Lagu

+=======================+
=> pilih opsi(1-2) : 2
>>

{}}{}{}{}{}{}{}{}{}{}{}{}


>>BUAT LIRIK
+=======================+
TAMBAH LIRIK LAGU       |
+=======================+

!] ini lirik lagunya

+=======================+
>>

{}{}{}{}{}{}{}{}{}{}{}{}{}


>>PUTAR LAGU
+=======================+
MEMUTAR LIRIK LAGU      |
+=======================+

ini lirik lagunya
lirik lagu
lagu baru pop wow

+=======================+
>>

*/