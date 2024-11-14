#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama ;
    int nim ;
};

int main (){
    mahasiswa mhs1;
    mhs1.nama= "Budi";
    mhs1.nim = 1234;

    cout << "Nama mahasiswa : "<< mhs1.nama<<endl ;
    cout << "Nim mahasiswa : " << mhs1.nim <<endl ;
    cin.get();
    return 0 ;

}

