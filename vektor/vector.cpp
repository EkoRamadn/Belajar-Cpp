#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 3, 4, 6, 6, 7, 7, 3, 3, 3, 3};

    // MEnghapus seluruh nilai pada vector
    vec.clear();

    // menginisialisasi ulang vector vec
    vec = {2, 5, 3, 1, 5, 7, 1, 23, 435, 6, 6, 3};
    // menghapus nilai tertentu pada vec
    vec.erase(vec.begin() + 2);                  // angka 3 dihapus
    vec.erase(vec.begin() + 4, vec.begin() + 6); // 7 dan 1 dihapus

    // menambahkan nilai dari Belakang
    vec.push_back(32);
    // menghapus nil;ai dari belakang
    vec.pop_back();

    // mengakses vec indeks ke 2
    cout << "akses indeks ke 2 : " << vec.at(2);

    // menambahkan atau menyelipkan nilai peda setelah nilai pertama
    vec.insert(vec.begin() + 1, 30);

    cout << "\n";

    // memgecek apakah vec kosong
    cout << "apakah vector kosong : " << vec.empty();

    cout << "\n";

    // mengembalikan atau menghitung panjang vector
    cout << "berapa panjang vector : " << vec.size();

    cout << "\n";

    // Iterasi menggunakan iterator
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << "\n";

    // menampilkan vec dengan lebih simpel
    for (int x : vec)
    {
        cout << x << " ";
    }

    cout << "\n";

    vector<int> vec1(2, 13);
    for (int x : vec1)
    {
        cout << x << " ";
    }

    cout << "\n";

    // convert arrat to vector
    int isArray[4] = {2, 3, 4, 5};

    // memasukan array dalam vector
    vector<int> vec2(isArray, isArray + sizeof(isArray) / sizeof(int));

    for (int x : vec2)
    {
        cout << x << " ";
    }

    cout << "\n";

    // input vector
    int input;
    vector<int> vec3;

    cout << "==masukan angka==\n";
    for (int i = 0; i <= 4; i++)
    {
        cout << "masukan angka : ";
        cin >> input;
        vec3.push_back(input);
    }
    cout << "=========\n";
    cout << "nalai vec3 : ";

    for (int x : vec3)
    {
        cout << x << " ";
    }

    return 0;
}
