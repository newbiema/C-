#include <iostream>
using namespace std;

int menupilihan();

int main(){
    cout << "Selamat Datang di menu kopi" << endl;
    cout << menupilihan() << endl;
    return 0; 
}

int menupilihan(){
    int pilihan;
    cout << "1. Kopi Hitam" << endl;
    cout << "2. Kopi Susu" << endl;
    cout << "3. White Kopi" << endl;
    cout << "Pilih: ";
    cin >> pilihan;
    return pilihan;
}
