#include <iostream>
#include "../headerAKA.h"

/* ===========================================|
||  ANGGOTA KELOMPOK:                        ||
||  1. Adi Bintang Syahputra (103012300499)  ||
||  2. Raja Hanif Shirvani (103012300315)    ||
|=========================================== */

int main() {
    // ini placeholder inputnya, nah nanti dijadiin judul lagu paling, sama inputannya terurut
    string arr[] = {"Aku Cinta Padamu", "Bunda", "Cinta Luar Biasa", "Demi Waktu", "Ego", "Firasat", "Gajah", "Hati yang Kau Sakiti", "Indonesia Pusaka", "Jikalau Kau Cinta"};
    int n = sizeof(arr) / sizeof(arr[0]);
    string target = "Cinta Luar Biasa"; // ini kata yang mau dicarinya

    // tinggal hapus komen didepannya kalo mau pake algoritma sequential atau binary:
    int index = sequentialSearch(arr, n, target);
    // int index = binarySearch(arr, 0, n-1, target);

    if (index != -1) {
        cout << "Judul Lagu ditemukan di urutan ke-" << (index + 1) << endl;
    } else {
        cout << "Judul Lagu tidak ditemukan tidak ditemukan." << endl;
    }

    return 0;
}
