#include <iostream>
#include <fstream> // Untuk manipulasi file

int main() {
    // Menulis ke file
    std::ofstream outFile("contoh.txt"); // Membuka file untuk menulis
    if (outFile.is_open()) {
        outFile << "Halo, ini adalah contoh file teks.\n";
        outFile << "C++ sangat menarik untuk dipelajari!\n";
        outFile.close(); // Menutup file
    } else {
        std::cerr << "Gagal membuka file untuk menulis.\n";
    }

    // Membaca dari file
    std::ifstream inFile("contoh.txt"); // Membuka file untuk membaca
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << line << '\n'; // Menampilkan isi file ke layar
        }
        inFile.close(); // Menutup file
    } else {
        std::cerr << "Gagal membuka file untuk membaca.\n";
    }

    return 0;
}
