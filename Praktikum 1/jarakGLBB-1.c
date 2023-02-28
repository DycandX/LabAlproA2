/*
Nama Program  : jarakGLBB
Deskripsi     : Hitung Jarak Gerak Lurus Berubah Beraturan (GLBB)
Nama Pembuat  : Zulvikar Kharisma Nur M
NIM           : 24060122140183 
Tanggal       : 21/02/2023
*/
// Contoh Kasus :

#include <stdio.h>

int main(void){
    // kamus lokal
    /* kamus lokal berisikan tipe data yang ingin di masukkan
    terdapat v0 s a dan t
    */
    float s; // merupakan jarak
    float v0; // merupakan kecepatan awal
    float t; // waktu
    float a; // percepatan

    // Algoritma
    // Masukan rumus s
    s = v0 * t + 1/2*(a*(t*t));
    printf("Masukan nilai input: ");
    scanf("%f %f %f",&v0,&t,&a);
    printf("Hasil dari s adalah %.2f",s);

    return 0;
}