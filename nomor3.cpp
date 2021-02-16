#include <iostream>

using namespace std;

int main(){
  int a, b, e, f, matriks[10][10], transpose[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> e;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> f;
  cout << "Masukkan elemen matriks\n";
  for (a = 0; a < e; a++){
    for (b = 0; b < f; b++){
      cin  >> matriks[a] [b];
    }
  }
  for (a = 0; a < e; a++){
    for (b = 0; b < f; b++){
      transpose[b][a] = matriks[a][b];
    }
  }
  cout << "Hasil Transpose Matriks: \n";
  for (a = 0; a < f; a++){
    for (b = 0; b < e; b++){
      cout << transpose[a] [b] << "\t";
    }
    cout << endl;
  }
}
