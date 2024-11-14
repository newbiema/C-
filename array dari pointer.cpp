#include <iostream>
using namespace std;

int main()
{
    /* Mendeklarasikan array dari pointer*/
    int *P [5];
    for (int i = 0; i < 5; i++)
    {
        /* memsan alamat / ruang memori */
        P[i]= new int ;
        /* Memberikan nilai pada alamat memori yang telah di pesan*/
        *P[i] = (i+1) * 100;
        // menampilkan hasil niali dan alamat
        cout<<"Nilai : P["<< i << "] : " << *P [i] <<endl;
        cout<<"Nilai : P["<< i << "] : " << P [i] <<endl;
        
         
    }
    


    cin.get();

    return 0;
}
