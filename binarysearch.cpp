#include <iostream>
using namespace std;

void cariBinary(int arr[], int n, int target) {
    int awal = 0;
    int akhir = n - 1;
    int tengah = (awal + akhir) / 2;
    int indexFound = -1;

    while (akhir >= awal) {
        if (arr[tengah] == target) {
            indexFound = tengah;
            break;
        } else if (arr[tengah] > target) {
            akhir = tengah - 1;
        } else {
            awal = tengah + 1;
        }
        tengah = (awal + akhir) / 2;
    }

    if (indexFound != -1) {
        cout << "Data ditemukan pada index: " << indexFound << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
}

int main() {
    int n = 10;
    int arr[] = { 3, 9, 11, 12, 15, 17, 20, 23, 31, 35 };
    cariBinary(arr, n, 17);
    return 0;
}
