/*
Nama Program  : BilSempN
Deskripsi     : menghitung dan menampilkan sebuah bilangan integer sembarang adalah bilangan sempurna
Nama Pembuat  : Zulvikar Kharisma Nur M.
NIM           : 24060122140183
Tanggal       : 04/03/23
*/
// Contoh Kasus :

#include <stdio.h>

int main(void) {

  // kamus lokal
  /* kamus lokal berisikan tipe data yang ingin di masukkan
  terdapat N i j
  */
  int N;
  int i;
  int j;

  // Algoritma
  printf("N : ");
  scanf("%d", &N);
  for (i = N; i >= 0; i--)

  {
    printf("%d\t", 1);
    for (j = N; j >= i; j--)

    {
      printf("%d|t", j);
    }
    printf("\n");
  }

  return 0;
}