#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

/*
mean = jumblah nilai/jumblah siswa
modulus nilai tengah
standard deviasinya = \/Sima(x-mean)2/n
 */

int funcMean(int arrLength, int nilaiMhs[]);

float funcStandD(int nilaiMhs[], int arrLength)
{
  float tmp = 0,
        mean = funcMean(arrLength, nilaiMhs);

  for (int i = 0; i < arrLength; i++)
  {
    tmp += (float)pow(nilaiMhs[i] - mean, 2);
  }
  tmp = sqrt(tmp / arrLength);

  return tmp;
}

int funcMean(int arrLength, int nilaiMhs[])
{
  int totalNilai = 0;
  for (int i = 0; i < arrLength; i++)
  {
    totalNilai += nilaiMhs[i];
  }
  return totalNilai / arrLength;
}

float funcMedianwithSort(int nilaiMhs[6], int arrLength)
{
  float median;
  int r = arrLength / 2;
  sort(nilaiMhs, nilaiMhs + arrLength);

  median = (float)(arrLength % 2 == 0) ? (nilaiMhs[r] + nilaiMhs[r + 1]) / 2 : nilaiMhs[r];

  return median;
}

int main()
{
  string namaMhs[] = {
      "Tono", "Ani", "Budi", "Cintia",
      "Lisa", "Senku", "Mariyadi"};
  int nilaiMhs[] = {
      92, 65, 74, 80, 80, 70, 78};
  int arrLength = sizeof(nilaiMhs) / sizeof(nilaiMhs[0]), mean;

  // menghitung mean
  cout << "Nilai Mean : " << funcMean(arrLength, nilaiMhs);

  // mencari median
  cout << "\nNilai Median : " << funcMedianwithSort(nilaiMhs, arrLength);

  // mencari standard deviasinya
  cout << "\nNilai standard deviasinya : " << setprecision(3) << funcStandD(nilaiMhs, arrLength);

  return 0;
}