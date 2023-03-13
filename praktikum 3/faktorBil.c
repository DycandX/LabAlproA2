/*
Nama Program  : FaktorBil
Deskripsi     : mengecek dan menampilkan faktor dari bilabgan bulat
Nama Pembuat  : Zulvikar Kharisma Nur M.
NIM           : 24060122140183
Tanggal       : 04/03/23
*/
// Contoh Kasus :

#include <stdio.h>

int main() {
  // kamus lokal
  /* kamus lokal berisikan tipe data yang ingin di masukkan
  terdapat
  */
  int angka; // bilangan yang ingin di cek (N)
  int i; // counter

  // Algoritma

  printf("Program Mencari Faktor dari Bilangan\n");
  printf("------------------------------------\n");

  printf("Masukkan bilangan bulat positif : ");
  scanf("%d", &angka);

  printf("Faktor dari bilangan %d yaitu: ", angka);
  for (i = 1; i <= angka; i++) {
    // sisa bagi = 0 maka termasuk faktor
    if (angka % i == 0) {
      printf(" %d", i);
    }
  }
  printf("\n\n\n");

  return 0;
}