/*
Nama Program  : cekBulan
Deskripsi     : mengecek dan menampilkan nama-nama bulan dari nomor bulan yang di masukan 
Nama Pembuat  : Zulvikar Kharisma Nur M. 
NIM           : 24060122140183 
Tanggal       : 05/03/23
*/
// Contoh Kasus :

#include <stdio.h>

int main(void) {
  // kamus lokal
  /* kamus lokal berisikan tipe data yang ingin di masukkan
  terdapat b
  */
  int b; // nilai yang ingin di cek

  // Algoritma
  printf("Masukan nomor bulan yang ingin di tampilkan: ");
  scanf("%i", &b);
  if (b == 1) {
    printf("Januari");
  } else if (b == 2) {
    printf("Februari");
  } else if (b == 3) {
    printf("Maret");
  } else if (b == 4) {
    printf("April");
  } else if (b == 5) {
    printf("Mei");
  } else if (b == 6) {
    printf("Juni");
  } else if (b == 7) {
    printf("Juli");
  } else if (b == 8) {
    printf("Agustus");
  } else if (b == 9) {
    printf("September");
  } else if (b == 10) {
    printf("Oktober");
  } else if (b == 11) {
    printf("November");
  } else if (b == 12) {
    printf("Desember");
  } else {
    printf("masukan nomor bulan tidak tepat\n");
    printf("<<masukan harus 1 sampai dengan 12>>");
  }

  return 0;
}