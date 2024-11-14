#include <iostream>
using namespace std;

void fungsi (int *b){
    *b = 7 ;
    cout<< " nilai variabel b : " << *b << endl;
    cout<< " alamat variabel b : " << b << endl;
}

int main() {
    int a = 5 ;
    cout << " nilai variabel sebelum perubahan : " << a << endl;
    cout << " alamat variabel sebelum perubahan : " << &a << endl;
    cout<< endl;

    fungsi(&a);
    cout << " nilai variabel Setelah perubahan : " << a << endl;
    cout << " alamat variabel Setelah perubahan : " << &a << endl;
    cin.get();
    
    return 0;

   
}