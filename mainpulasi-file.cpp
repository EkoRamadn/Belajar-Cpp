#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream cth("contoh.txt");
    if (cth.is_open())
    {
        cth << "hello nama saya udin";
        cth.close();
    }
    else
    {
        cerr << "Terjadi Kesalahan Proses";
    }

    ifstream opn("contoh.txt");
    if (opn.is_open())
    {
        string line;
        while (getline(opn, line))
        {
            cout << line;
        }
        opn.close();
    }else{
        cerr << "file Error";
    }
    return 0;
}