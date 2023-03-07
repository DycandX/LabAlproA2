/*
Nama Program  : cekKalku-ss
Deskripsi     : kalkulator super sederhana yang dapat menerima 2 masukan
di masukan
Nama Pembuat  : Zulvikar Kharisma Nur M.
NIM           : 24060122140183
Tanggal       : 05/03/23
*/
// Contoh Kasus :

#include <stdio.h>
int main() {
  // kamus lokal
  /* kamus lokal berisikan tipe data yang ingin di masukkan
  terdapat menu angka1 angka2 hasil angkaInt1 angkaInt2 hasilInt
  */

  int menu;
  float angka1;
  float angka2;
  float hasil;
  int angkaInt1 = angka1;
  int angkaInt2 = angka2;
  int hasilInt = hasil;

  // Algoritma
  printf("Program Kalkulator");
  printf("\n");

  printf("Masukkan angka pertama: ");
  scanf("%f", &angka1);
  printf("Masukkan angka kedua: ");
  scanf("%f", &angka2);
  printf("1 | Penjumlahan\n");
  printf("2 | Penguranagn\n");
  printf("3 | Perkalian\n");
  printf("4 | Pembagian\n");
  printf("5 | Division\n");
  printf("6 | Modulo\n");

  printf("operasi apa yang anda inginkan? \n");
  scanf("%i", &menu);
  if (menu == 1) {
    hasil = angka1 + angka2;
    printf("->% g + % g = % g", angka1, angka2, hasil);
  } else if (menu == 2) {
    hasil = angka1 - angka2;
    printf("->% g - % g = % g", angka1, angka2, hasil);
  } else if (menu == 3) {
    hasil = angka1 * angka2;
    printf("->% g * % g = % g", angka1, angka2, hasil);
  } else if (menu == 4) {
    hasil = angka1 / angka2;
    printf("->% g / % g = % g", angka1, angka2, hasil);
  } else if (menu == 5) {
    hasilInt = angka1 / angka2;
    printf("->% g / % g = % i", angka1, angka2, hasilInt);
  } else if (menu == 6) {
    hasil = angkaInt1 % angkaInt2;
    printf("-> %g mod %g = % g", angka1, angka2, hasil);
  } else {
    printf("Tidak terdaftar pada pilihan");
  }
}

/*else if (menu == 6) {
    hasil = angkaInt1 % angkaInt2;
    printf("-> %g mod %g = % g", angka1, angka2, hasil);
  }*/

/*else if (menu == 6) {
    printf("%i", angkaInt1 % angkaInt2);
  }*/