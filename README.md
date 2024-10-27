# Array pada C++

Array merupakan sebuah variabel yang memiliki serangkaian elemen dari jenis tipe data yang sama

```cpp
tipeData identifier[ukuran];
```

contoh penulisan:
```cpp
int nilai[50];
int grade[50] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
```
Pernyataan di atas dinamakan Array statis atau Fixed array, karena kita mendirikan variabel array dengan menggunakan konstanta bernilai 50 sebagai index.

Contoh di atas valid, meskupun variabel memesan 50 elemen tetapi hanya memberikan 10 nilai. jadi index ke 10-50 akan diisi kosong. 

## Index pada array
index pada array selalu di mulai dari `0`.
contoh urutan index `Array`
```cpp
char fun[5]={'A','B','C','D','E'};
//            0   1   2   3   4
```

## Mendeklarasikan tanpa ukuran array
dalam C++ anda bisa mendirikan array tanpa menyertakan ukuran 
```cpp
int nilai[]={2,4,7,9};
```

## Mengakses Variabel Array
Untuk mengakses variabel array contoh penulisan nya
```cpp
int nilai[4]={2,4,7,9};
nilai[2];

// nilai[2] = 7
```
statment diatas dapat dibaca
"kita akan mengakses variabel array index ke-2 yaitu 7"
juga bisa menggunakan fungsi `.at()` untuk akses aman.
```cpp
int nilai[4]={2,4,7,9};
nilai.at(2);

// nilai[2] = 7
```

## Array Multidimensi
Array Multidimensi adalah sebuah array yang memuat array lagi di dalamnya.

Bentuk Penulisan:
```cpp
tipeData identifier[array-1][array-2]….[array-n];
```
### Inisialisasi Array Dua Dimensi

```cpp
string nama[3][2]={
{“joko”, “dadang”}, //baris ke satu dengan 2 kolom
{“fajar”, “nick”}, // baris ke dua dengan 2 kolom
{“laksono”, ”eren”} // baris ke tiga dengan 2 kolom
}
```

jika

```cpp
string nama[3][2]={
{“joko”, “dadang”}, //baris ke satu dengan 2 kolom [1][1] = “joko”, [1][2]=”dadang”
{“fajar”}, // baris ke dua dengan 2 kolom, [2][1] = “fajar”, [2][2] “” 
{} // menginisialisasi satu baris dengan angka 0,  [3][1] = “”, [3][2]=””
}
```

### array multidimensi adalah array, kita masih dimungkinkan untuk mendeklarasi variabel array tanpa menyertakan ukuran dari array tersebut, ukuran otomatis akan terhitung berdasarkan jumlah nilai pada proses inisialisasi.

## Mengakses Array Dua Dimensi
untuk mengakses array dua dimensi 