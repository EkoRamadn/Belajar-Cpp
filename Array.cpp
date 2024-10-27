#include <iostream>
using namespace std;

int main()
{
    // deklarasi dam inisialisasi array
    char fun[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    //              0    1    2    3    4    5
     // Deklarasi dan inisialisasi array menggunakan std::array
   

    // akses array
    cout << "Isi Array 'fun[4]' : " << fun[4] << endl; // mengembalikan E

    for(int i = 0; i < sizeof(fun); i++){
        cout << "," << i;
    }
    cout << "\n";


    // array multi dimensi
    string nama[3][2]={{"Eko","rama"},{"dani","yan"},{"opera","nginfo"}};

    int baris = sizeof(nama) / sizeof(nama[0]);         // Jumlah baris
    int kolom = sizeof(nama[0]) / sizeof(nama[0][0]);   // Jumlah kolom

    // Loop untuk menampilkan semua elemen array
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << nama[i][j] << " ";
        }
        cout << "\n";  // Ganti baris setelah setiap baris array
    }
    cout << "\n";
    return 0;
}