/*
Nama Program  : cekTahanan
Deskripsi     : mengecek dan menampilkan 3 buah tahanan bila di jumlah
Nama Pembuat  : Zulvikar Kharisma Nur M.
NIM           : 24060122140183
Tanggal       : 05/03/23
*/
// Contoh Kasus :

#include <stdio.h>

int main(void) {
  // kamus lokal
  /* kamus lokal berisikan tipe data yang ingin di masukkan
  terdapat t1 t2 t3
  */
  int t1, t2, t3; // nilai tahanan yang ingin di cek
  int jumlahT;

  // Algoritma
  printf("Masukan nilai tahanan pertama: ");
  scanf("%i", &t1);
  printf("\nMasukan nilai tahanan kedua: ");
  scanf("%i", &t2);
  printf("\nMasukan nilai tahanan ketiga: ");
  scanf("%i", &t3);

  if ((t1 >= 0) && (t2 >= 0) && (t3 >= 0)) {
    jumlahT = t1 + t2 + t3;
    printf("\ntotal tahanan adalah : %i", jumlahT);
  } else {
    printf("masukan tahanan tidak boleh negatif");
  }

  return 0;
}