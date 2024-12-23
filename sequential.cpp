#include "headerAKA.h"

/* ===========================================|
||  ANGGOTA KELOMPOK:                        ||
||  1. Adi Bintang Syahputra (103012300499)  ||
||  2. Raja Hanif Shirvani (103012300315)    ||
|=========================================== */

// ITERATIF
int sequentialSearch(string arr[], int n, string target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
