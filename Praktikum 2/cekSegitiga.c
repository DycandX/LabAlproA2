/*
Nama Program  : cekSegitiga
Deskripsi     : Mengecek dan menampilkan sisi segitiga dan jenis segitiga
Nama Pembuat  : Zulvikar Kharisma Nur M.
NIM           : 24060122140183 
Tanggal       : 05/03/23
*/
// Contoh Kasus :

#include <stdio.h>

int main() {
  // kamus lokal
  /* kamus lokal berisikan tipe data yang ingin di masukkan
  terdapat s1 s2 s3
  */
  int s1; // sisi 1
  int s2; // sisi 2
  int s3; // sisi 3

  // Algoritma
  printf("Masukkan sisi 1 segitiga: ");
  scanf("%d ", &s1);
  printf("Masukkan sisi 2 segitiga: ");
  scanf("%d ", &s2);
  printf("Masukkan sisi 3 segitiga: ");
  scanf("%d ", &s3);
  
  if ((s1 > 0) && (s2 > 0) && (s3 > 0)) {
    if ((s1 = s2) && (s1 = s3) && (s2 = s3)) {
      printf("sisi 1: %d, sisi 2: %d, sisi 3: %d,", s1, s2, s3);
      printf("Ini adalah segitiga sama sisi");
    }
    else if ((s1 = s2) || (s1 = s3) || (s2 = s3)) {
      printf("sisi 1: %d, sisi 2: %d, sisi 3: %d,", s1, s2, s3);
      printf("Ini adalah segitiga sama kaki");
    }else {
        printf("sisi 1: %d, sisi 2: %d, sisi 3: %d,", s1, s2, s3);
        printf("Ini adalah segitiga sembarang");
      }
  }else {
      printf("Terdapat nilai yang bukan sisi segitiga");
    }
  return 0;
}