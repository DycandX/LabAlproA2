/*
Nama Program  : gayaSenrt
Deskripsi     : Hitung Gaya Setripetal
Nama Pembuat  : Zulvikar Kharisma Nur M.
NIM           : 24060122140183 
Tanggal       : 21/02/2023
*/
// Contoh Kasus :

#include <stdio.h>

int main(void){
    // kamus lokal
    /* kamus lokal berisikan tipe data yang ingin di masukkan
    terdapat v r F dan m
    */
    float m; // merupakan massa (dalam kg)
    float r; // merupakan jari-jari (dalam meter)
    float F; // merupakan Gaya (F dalam Newton)
    float v; // merupakan kecepatan

    // Algoritma
    // Masukan rumus F
    F = m * ((v*v)/r);
    printf("Masukan nilai input: ");
    scanf("%f %f %f",&m,&v,&r);
    printf("Hasil dari F adalah %.2f",F);

    return 0;
}