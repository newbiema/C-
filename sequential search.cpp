#include <iostream>
using namespace std;

void cariSequential(int arr[], int n, int target) {
    int indexFound = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            indexFound = i;
            break;
        }
    }

    if (indexFound != -1) {
        cout << "Data ditemukan pada index: " << indexFound << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
}

int main() {
    int n = 6;
    int arr[] = {77, 42, 35, 12, 101, 5};
    cariSequential(arr, n, 101);
    return 0;
}
