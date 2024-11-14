#include <iostream>
using namespace std;
struct buku
{
    string judul;
    string pengarang;
    int tahun;
    float harga;
};

int main() {

    buku buku1;
    buku1.judul ;
    cin >> "Masukkan judul">>buku1.judul>> endl;
    buku1.pengarang = " J.k Rowling";
    buku1.tahun = 1997;
    buku1.harga = 100000;

    cout << "Judul buku : " << buku1.judul << endl;
    cout << "Pengarang : " << buku1.pengarang << endl;
    cout << "Tahun : " << buku1.tahun << endl ; 
    cout << "Harga : " << buku1.harga;

    cin.get();

    return 0;
}
