#include <iostream>
using namespace std;

/*
 soal 01 menetunkan invers matrik

 Matrik A = 4 2 8
            2 1 5
            3 2 4

 Jawaban
 Matrik A-1 = 3 −3.5 −0.5
​             −4   8    1
​             −1   2    0

 rumus
 A-1 = 1/detA * adjA

 detA = a11*a22*a33 + a12*a23*a31 + a13*a21*a32 - a31*a22*a13 - a32*23*11 - a33*a21*12

 ajdA =
*/

int det(int arr[3][3])
{
  return arr[0][0] * arr[1][1] * arr[2][2] + arr[0][1] * arr[1][2] * arr[2][0] + arr[0][2] * arr[1][0] * arr[2][1] - arr[2][0] * arr[1][1] * arr[0][2] - arr[2][1] * arr[1][2] * arr[0][0] - arr[2][2] * arr[1][0] * arr[0][1];
}
int detB(int arr[3][3])
{
  int dter = 0;
  dter += arr[0][0] * arr[1][1] * arr[2][2];
  dter += arr[0][1] * arr[1][2] * arr[2][0];
  dter += arr[0][2] * arr[1][0] * arr[2][1];
  dter -= arr[2][0] * arr[1][1] * arr[0][2];
  dter -= arr[2][1] * arr[1][2] * arr[0][0];
  dter -= arr[2][2] * arr[1][0] * arr[0][1];

  return dter;
}
void adj(int arr[3][3], int adjoin[3][3])
{
  adjoin[0][0] = arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1];
  adjoin[0][1] = -(arr[0][1] * arr[2][2] - arr[0][2] * arr[2][1]); //
  adjoin[0][2] = arr[0][1] * arr[1][2] - arr[0][2] * arr[1][1];    //
  adjoin[1][0] = -(arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]); //
  adjoin[1][1] = (arr[0][0] * arr[2][2] - arr[2][0] * arr[0][2]);
  adjoin[1][2] = -(arr[0][0] * arr[1][2] - arr[1][0] * arr[0][2]);
  adjoin[2][0] = arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]; //
  adjoin[2][1] = -(arr[0][0] * arr[2][1] - arr[0][1] * arr[2][0]);
  adjoin[2][2] = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
}

int main()
{
  int mathA[3][3] = {
      {4, 2, 8},
      {2, 1, 5},
      {3, 2, 4},
  };
  int detA = det(mathA);
  int adjoin[3][3];
  adj(mathA, adjoin);

  float inversMathA[3][3];
  for (int i = 0; i < sizeof(adjoin) / sizeof(adjoin[0]); i++)
  {
    for (int j = 0; j < sizeof(adjoin) / sizeof(adjoin[0]); j++)
    {
      inversMathA[i][j] = 1.0 / detA * adjoin[i][j];
    }
  }

  for (int i = 0; i < sizeof(adjoin) / sizeof(adjoin[0]); i++)
  {
    for (int j = 0; j < sizeof(adjoin) / sizeof(adjoin[0]); j++)
    {
      cout << " " << inversMathA[i][j];
    }
    cout << "\n";
  }

  return 0;
}
