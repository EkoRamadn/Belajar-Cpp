#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
    ofstream ofLirik("lirik.txt");
    if (ofLirik.is_open())
    {
        ofLirik << "masukan ini text \n";
        ofLirik << "yang ini juga\n";
        ofLirik << "wow ini sangat keren\n";
        ofLirik.close();
    }
    else
    {
        cerr << "terjadi error";
    }

    ifstream ifLirik("lirik.txt");
    if (ifLirik.is_open())
    {
        char ch;
        while (ifLirik.get(ch))
        {
            cout << ch;
            this_thread::sleep_for(chrono::milliseconds(50));
        }
        ifLirik.close();
    }
    else
    {
        cerr << "terjadi error";
    }
    return 0;
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