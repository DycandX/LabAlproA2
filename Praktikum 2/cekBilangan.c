/*
Nama Program  : cekBilangan
Deskripsi     : mengecek dan menampilkan apakah i bilangan integer sembarang atau bukan 
Nama Pembuat  : Zulvikar Kharisma Nur M. 
NIM           : 24060122140183 
Tanggal       : 05/03/23
*/
// Contoh Kasus :

#include <stdio.h>

int main(void) {
  // kamus lokal
  /* kamus lokal berisikan tipe data yang ingin di masukkan
  terdapat i
  */
  int i; // nilai yang ingin di cek

  // Algoritma
  printf("Masukan bilangan yang ingin dicek: ");
  scanf("%i", &i);
  if (i > 0) {
    printf("i adalah bilangan bulat positif");
  } else if (i < 0) {
    printf("%i adalah bilabgan bulat negatif", i);
  } else if (i == 0) {
    printf("%i = n/a", i);
  } else {
    printf("%i bukan termasuk bilangan", i);
  }

  return 0;
}