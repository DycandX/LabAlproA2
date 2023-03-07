/*
Nama Program  : cekHari
Deskripsi     : mengecek dan menampilkan nama-nama hari dari nomor hari yang di masukan
Nama Pembuat  : Zulvikar Kharisma Nur M. 
NIM           : 24060122140183 
Tanggal       : 05/03/23
*/
// Contoh Kasus :

#include <stdio.h>

int main(void) {
  // kamus lokal
  /* kamus lokal berisikan tipe data yang ingin di masukkan
  terdapat h
  */
  int h; // nilai yang ingin di cek

  // Algoritma
  printf("Masukan nomor hari yang ingin di tampilkan: ");
  scanf("%i", &h);
  if (h == 1) {
    printf("Senin");
  } else if (h == 2) {
    printf("Selasa");
  } else if (h == 3) {
    printf("Rabu");
  } else if (h == 4) {
    printf("Kamis");
  } else if (h == 5) {
    printf("Jumat");
  } else if (h == 6) {
    printf("Sabtu");
  } else if (h == 7) {
    printf("Minggu");
  } else {
    printf("masukan nomor hari tidak tepat\n");
    printf("<<masukan harus 1 sampai dengan 7>>");
  }

  return 0;
}