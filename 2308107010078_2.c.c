#include <stdio.h>

// Memasukkan rumus untuk mencari tahun kabisat
int tahun_kabisat(int tahun) {
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        return 1; // Tahun kabisat
    } else {
        return 0; // Bukan tahun kabisat
    }
}

int main() {
    int tahun;
//memasukkan tahun
printf("masukkan tahun :");
scanf("%d", &tahun);

// menampilan tahun kabisat & bukan tahun kabisat
if (tahun_kabisat(tahun)) {
    printf("tahun %d merupakan tahun kabisat\n", tahun);
} else {
    printf("tahun %d bukan tahun kabisat\n", tahun);
}
    return 0;
}