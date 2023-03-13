/*
Nama Program  : jumDeret
Deskripsi     : menghitung dan menampilkan jumlah deret bilangan bulat
Nama Pembuat  : Zulvikar Kharisma Nur M.
NIM           : 24060122140183
Tanggal       : 04/03/23
*/
// Contoh Kasus :

#include <stdio.h>

int deret(int n); // deklarasi fungsi deret
int main() {
  // kamus lokal
  /* kamus lokal berisikan tipe data yang ingin di masukkan
  terdapat i n j
  */
  int i;
  int n;
  int p;

  //Algoritma
  printf("Penjumlahan Deret Bilangan Sesuai Angka Masukan\n\n");
  printf("Input = ");
  scanf("%d", &n);

  printf("\nHasil = ");
  for (i = 1; i < n; i++) // perulangan untuk deret angka sesuai masukan angka
  {                       // tampilan hasil
    printf("%d", i);
    printf(" + ");
  }
  printf("%d = %d\n", n, deret(n)); // tampilan deret akhir dan hasil
}

// definisi fungsi untuk pemilihan deret angka
int deret(int n) {
  if (n == 0) // jika diisi nol maka tidak melanjutkan proses
  {
    return 0;
  } else
    return n + deret(n - 1); // proses jumlah
}