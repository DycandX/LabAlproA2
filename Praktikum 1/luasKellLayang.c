/*
Nama Program  : luasKellLayang
Deskripsi     : Hitung Luas Keliling Layang-layang
Nama Pembuat  : Zulvikar Kharisma Nur M
NIM           : 24060122140183 
Tanggal       : 21/02/2023
*/
// Contoh Kasus :

#include <stdio.h>

int main(void){
    // kamus lokal
    /* kamus lokal berisikan tipe data yang ingin di masukkan
    terdapat s1 s2 d1 d2 Luas dan Kell
    */
    float s1; // merupakan sisi satu layan-layang (dalam meter)
    float s2; // merupakan sisi dua layan-layang (dalam meter)
    float d1; // merupakan diagonal satu layan-layang (dalam meter)
    float d2; // merupakan diagonal dua layan-layang (dalam meter)
    float luas; // luas layang-layang
    float kell; // keliling layang-layang

    // Algoritma
    // Masukan rumus luas
    luas = 1/2 *d1 *d2;
    printf("Masukan nilai input: ");
    scanf("%f %f",&d1,&d2);
    printf("Hasil dari luas adalah %.2f",luas);

    // Masukan rumus kell
    kell = 2 * (s1+s2);
    printf("Masukan nilai input: ");
    scanf("%f %f",&s1,&s2);
    printf("Hasil dari keliling adalah %.2f",kell);

    return 0;
}