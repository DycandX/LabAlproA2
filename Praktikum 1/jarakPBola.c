/*
Nama Program  : jarakPBola
Deskripsi     : Hitung Jarak Gerak Para Bola
Nama Pembuat  : Zulvikar Kharisma Nur M
NIM           : 24060122140183 
Tanggal       : 21/02/2023
*/
// Contoh Kasus :

#include <stdio.h>

int main(void){
    // kamus lokal
    /* kamus lokal berisikan tipe data yang ingin di masukkan
    terdapat v0 y g dan t
    */
    float y; // merupakan jarak
    float v0; // merupakan kecepatan awal
    float t; // waktu
    const g; // gravitasi

    // Algoritma
    // Masukan rumus y
    y = v0 * t - 1/2*(g*(t*t));
    printf("Masukan nilai input: ");
    scanf("%f %f %f",&v0,&t,&g);
    printf("Hasil dari y adalah %.2f",y);

    return 0;
}