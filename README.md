# Pointer pada C++
Pointer adalah sebuah variabel atau object yang menunjuk ke variabel atau object lainnya.pointer hanyalah variabel yang menyimpan alamat memori.

## Macam-macam Operator pada Pointer
### Address-of Operator (&)
Address-of Operator (&), adalah operator yang memungkinkan kita untuk mendapatkan/melihat alamat memori yang dimiliki oleh variabel tersebut.

contoh penggunaan:
```cpp
&variabel
```
### Dereference Operator (*)
Dereference Operator (*), adalah operator yang memungkinkan mendapatkan isi/nilai dari sebuah memori berdasarkan alamat memori.
```cpp
*&var
```

## Mendirikan Pionter
```cpp
int *pInt;
double *pDouble = &myVar;
```
## Cara Mengakses Pointer
Untuk mengakses nilai dari pointer kita hanya cukup memanggil identiatas dari pointer tersebut.]
```cpp
pInt
```