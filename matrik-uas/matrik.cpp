#include <iostream>
#include <iomanip>
using namespace std;

int funcDet(float arr[3][3])
{
  int determianan = 0;
  determianan += arr[0][0] * arr[1][1] * arr[2][2];
  determianan += arr[0][1] * arr[1][2] * arr[2][0];
  determianan += arr[0][2] * arr[1][0] * arr[2][1];
  determianan -= arr[2][0] * arr[1][1] * arr[0][2];
  determianan -= arr[2][1] * arr[1][2] * arr[0][0];
  determianan -= arr[2][2] * arr[1][0] * arr[0][1];

  return determianan;
}

void funcAdj(float arr[3][3], float adjoin[3][3])
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

void tampilMatrix(float arr[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << " " << setw(4) << arr[i][j];
    }
    cout << "\n";
  }
}

void funcInversMath(int detA, float adjoin[3][3], float inversMathA[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      inversMathA[i][j] = 1.0 / detA * adjoin[i][j];
    }
  }
}

int main()
{
  float mathA[3][3] = {
      {4, 2, 8},
      {2, 1, 5},
      {3, 2, 4},
  };
  float adjoin[3][3], inversMathA[3][3];

  int detA = funcDet(mathA);
  funcAdj(mathA, adjoin);
  funcInversMath(detA, adjoin, inversMathA);

  cout << "Matrik A : \n";
  tampilMatrix(mathA);
  cout << "\nMatrik A-1 : \n";
  tampilMatrix(inversMathA);

  return 0;
}