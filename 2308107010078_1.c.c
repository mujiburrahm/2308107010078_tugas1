#include <stdio.h>

int main() {
  int pilihan;
  int desimal, biner, oktal;

  // Menampilkan menu pilihan
  printf("Pilih jenis konversi:\n");
  printf("1. Desimal ke Biner\n");
  printf("2. Biner ke Desimal\n");
  printf("3. Desimal ke Oktal\n");
  printf("4. Oktal ke Desimal\n");
  printf("Masukkan pilihan Anda: ");
  scanf("%d", &pilihan);

  switch (pilihan) {
    case 1:
      // Konversi Desimal ke Biner
      printf("Masukkan bilangan desimal: ");
      scanf("%d", &desimal);

      // Algoritma konversi Desimal ke Biner
      biner = 0;
      int i = 1;
      while (desimal > 0) {
        biner += (desimal % 2) * i;
        desimal /= 2;
        i *= 10;
      }

      printf("Hasil konversi ke biner: %d\n", biner);
      break;

    case 2:
      // Konversi Biner ke Desimal
      printf("Masukkan bilangan biner: ");
      scanf("%d", &biner);

      // Algoritma konversi Biner ke Desimal
      desimal = 0;
      i = 1;
      while (biner > 0) {
        desimal += (biner % 10) * i;
        biner /= 10;
        i *= 2;
      }

      printf("Hasil konversi ke desimal: %d\n", desimal);
      break;

    case 3:
      // Konversi Desimal ke Oktal
      printf("Masukkan bilangan desimal: ");
      scanf("%d", &desimal);

      // Algoritma konversi Desimal ke Oktal
      oktal = 0;
      i = 1;
      while (desimal > 0) {
        oktal += (desimal % 8) * i;
        desimal /= 8;
        i *= 10;
      }

      printf("Hasil konversi ke oktal: %d\n", oktal);
      break;

    case 4:
      // Konversi Oktal ke Desimal
      printf("Masukkan bilangan oktal: ");
      scanf("%d", &oktal);

      // Algoritma konversi Oktal ke Desimal
      desimal = 0;
      i = 1;
      while (oktal > 0) {
        desimal += (oktal % 10) * i;
        oktal /= 10;
        i *= 8;
      }

      printf("Hasil konversi ke desimal: %d\n", desimal);
      break;

    default:
      printf("Pilihan tidak valid!\n");
  }

  return 0;
}
