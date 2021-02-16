#include <iostream>
using namespace std;
int main() {
  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int a, b, c, d, e, f, g, jumlah = 0;
  cout << "Masukkan jumlah baris matriks pertama: ";
  cin >> d;
  cout << "Masukkan jumlah kolom matriks pertama: ";
  cin >> e;
  cout << "Masukkan jumlah baris matriks kedua: ";
  cin >> f;
  cout << "Masukkan jumlah kolom matriks kedua: ";
  cin >> g;
  if(e != f){
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  } else {
    cout << "Masukkan elemen matriks pertama: \n";
    for(a = 0; a < d; a++){
      for(b = 0; b < e; b++){
        cin >> matriks1[a][b];
      }
    }
    cout << "Masukkan elemen matriks kedua: \n";
    for(a = 0; a < f; a++){
      for(b = 0; b < g; b++){
        cin >> matriks2[a][b];
      }
    }
    for(a = 0; a < d; a++){
      for(b = 0; b < g; b++){
        for(c = 0; c < f; c++){
          jumlah = jumlah + matriks1[a][c] * matriks2[c][b];
        }
        hasil[a][b] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: \n";
    for(a = 0; a < d; a++){
      for(b = 0; b < e; b++){
        cout << hasil[a][b] << "\t";
      }
      cout << endl;
    }
  }
  
  return 0;
}
