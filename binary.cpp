#include "headerAKA.h"

/* ===========================================|
||  ANGGOTA KELOMPOK:                        ||
||  1. Adi Bintang Syahputra (103012300499)  ||
||  2. Raja Hanif Shirvani (103012300315)    ||
|=========================================== */

// REKURSIF
int binarySearch(string arr[], int left, int right, string target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) {
            return binarySearch(arr, left, mid-1, target);
        }
        return binarySearch(arr, mid+1, right, target);
    }
    return -1;
}
