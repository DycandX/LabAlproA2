/*
Nama Program  : cekBilSemp
Deskripsi     : mengecek dan menampilkan apakah sebuah bilangan bulat adalah bilangan sempurna 
Nama Pembuat  : Zulvikar Kharisma Nur M. 
NIM           : 24060122140183 
Tanggal       : 05/03/23
*/
// Contoh Kasus :

#include <stdio.h>
#include <stdlib.h>
int main() {

  // kamus lokal
  /* kamus lokal berisikan tipe data yang ingin di masukkan
  terdapat n a b=0
  */
  int n, a, b = 0;

  // Algoritma
  printf("masukkan bilangan : ");
  scanf("%d", &n);
  for (a = 1; a < n; a++) {
    if (n % a == 0) {
      b = b + a;
    }
  }
  if (b == n) {
    printf("\n%d bilangan sempurna", n);
  } else {
    printf("\n%d bukan bilangan sempurna", n);
  }
}