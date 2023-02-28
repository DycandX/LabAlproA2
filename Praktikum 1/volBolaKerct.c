/*
Nama Program  : volBolaKerct
Deskripsi     : Hitung Volume Kerucut
Nama Pembuat  : Zulvikar Kharisma Nur M.
NIM           : 24060122140183 
Tanggal       : 21/02/2023
*/
// Contoh Kasus :

#include <stdio.h>

int main(void){
    // kamus lokal
    /* kamus lokal berisikan tipe data yang ingin di masukkan
    terdapat r Vb Vk dan Phi
    */
    float r; // merupakan jari-jari (dalam meter)
    float Vb; // merupakan volume bola (dalam meter kubik)
    float Vk; // merupakan volume kerucut (dalam meter kubik)
    const Phi = 3.1415; // merupakan konstanta (sebesar 3.1415)

    // Algoritma 1
    // Masukan rumus Vb
    Vb = 4/3 * (Phi*(r*r*r));
    printf("Masukan nilai input: ");
    scanf("%f",&r);
    // lanjut ke rumus Vk
    Vk = 1/2 * Vb;
    scanf("%f",&Vb);

    printf("Hasil dari Vk adalah %.2f",Vk);

    return 0;
}