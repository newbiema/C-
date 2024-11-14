#include <iostream>;
using namespace std;

struct mahasiswa{
    string nama;
    int nim ;
    int nilai;
};

int main (){
    int jml_mhs = 3;
    mahasiswa mhs [jml_mhs];

    for (int i = 0; i < jml_mhs; i++)
    {
        cout << "Masukkan data ke mhs ke- " << i+1<<endl;
        cout << "Nama : ";
        cin >> mhs[i].nama;

        cout << "nim : ";
        cin >> mhs[i].nim;

        cout << "nilai : ";
        cin >> mhs[i].nilai;

        cout<< endl;




    }


    
    

    
    return 0 ;

}
