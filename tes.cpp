#include <iostream>
using namespace std;
int main(){
    int a = 0,b = 0;
    string pil = "" ; 
    
    cout<<"Selamat Datang di kalkulator"<<endl;
    while (true)
    {
    cout<<"\n";
    cout<<"Masukkan angka ke1 : ";
    cin >> a;
    cout<<"Masukkan angka ke2 : ";
    cin >> b;
    cout<<"masukkan pil +/-/*/: = ";
    cin >> pil ;
    if (pil == "+" )
    {
       cout<< (a + b)<<endl;
    }

    else if (pil == "-")
    {
        cout << (a - b)<<endl;
    }

    else if (pil == "*")
    {
        cout << (a * b)<<endl;
    }

    else if (pil == ":")
    {
        cout << (a / b)<<endl;
    }

    else
    {
        cout<<"Inputan salah";
    }
    
    }
    return 0;
}