#include <iostream>
using namespace std;
int main(){
    int nilai = 0 ; 
    cout << "Masukkan nilai : " << endl;
    cin >>nilai;

    if (nilai >=85){
        cout << "nilai anda A"<<endl;

    }

    
    else if (nilai <= 70  < 85)
    {
        cout << "nilai anda B"<<endl;
    }

    else if (nilai <=55 <70 )
    {
        cout << "nilai anda C"<<endl;
    }

    else if (nilai <= 40 <55)
    {
         cout << "nilai anda D"<<endl;


    }

     else if (nilai <40 )
    {
         cout << "nilai anda D"<<endl;


    }
    
    else
    {
        cout<<"Inputan salah"<<endl;
    }
    


    
    cin.get();
    return 0 ;
    
}
