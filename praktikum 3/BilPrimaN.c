/*
Nama Program  : BilPrimaN
Deskripsi     : Mencetak bilangan prima sampai dengan bilangan integer sembarang
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
  int n;         // Bilagan yang ingin di cek
  int prima = 1; // cek prima
  int i;         // counter 1
  int j;         // counter 2
  
  // Algoritma
  printf("Masukkan bilabgan yang ingin di cek: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("n harus bilangan positf");
  } else {
    printf("\nBilangan prima dari %d adalah: \n", n);
    for (i = 2; i < n; ++i) {
      prima = 0;
      for (j = 2; j <= i / 2; ++j) {
        if (i % j == 0) {
          prima = 1;
          break;
        }
      }
      if (prima == 0) {
        printf("%d\n", i);
      }
    }
    printf("\n");
    if (prima == 1)
      printf("%i adalah angka prima \n", n);
    else
      printf("%i bukan angka prima \n", n);

    return 0;
  }
}