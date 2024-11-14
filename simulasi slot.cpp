#include <iostream>
using namespace std;

int saldo;

int random_angka(){
    srand(time(0));
		int random = (rand() % 10) + 1;
	return random;
}


void topup(){
    int top_up;
    cout<<"Masukkan jumlah top up"<<endl;
    cout<<"[1].Rp 25.000"<<endl;
    cout<<"[2].Rp 50.000"<<endl;
    cout<<"[3].Rp 100.000"<<endl;
    cout<<"[4].Custom"<<endl;
    cin>>top_up;

    if (top_up == 1)
    {
        cout<<"Saldo berhasil ditambahkan senilai Rp.25.000"<<endl;
        saldo += 25000;
        
    }

    else if (top_up == 2)
    {
        cout<<"Saldo berhasil ditambahkan senilai Rp.50.000"<<endl;
        saldo += 50000;
    }

        else if (top_up == 3)
    {
        cout<<"Saldo berhasil ditambahkan senilai Rp.100.000"<<endl;
        saldo += 100000;
    }

        else if (top_up == 4)
    {
        int custom;
        cout<<"Masukkan Jumlah : "<<endl;  
        cin>>custom;
        cout<<"Saldo berhasil ditambahkan senilai Rp."<<custom<<endl;
        saldo += custom;
    }
    
}



void bermain(){
    int taruhan ;
    cout<<"Pasang taruhan : "<<endl;
    cin>>taruhan;
    if (saldo < taruhan )
    {
        cout<<"Saldo anda tidak cukup untuk taruhan silahkan Top Up"<<endl;
    }
    

    else if (random_angka() > 5)
    {
        cout<<"Anda Menang"<<endl;
        saldo += taruhan ;
    }
    
    else if (random_angka() <= 5)
    {

        cout <<"Anda Kalah"<<endl;
        saldo -= taruhan;
        
    }
    


}


void check(){
    cout<<"Sisa Saldo Anda : "<<saldo<<endl;
    if (saldo == 0)
    {
        cout<<"Saldo anda Kosong"<<endl;
    };
    

}



int main() {
    int pil;
    while (true)
    {
        cout<<"Pilih Menu"<<endl;
        cout<<"[1].Top Up"<<endl;
        cout<<"[2].Bermain"<<endl;
        cout<<"[3].Check Saldo"<<endl;
        cin>>pil;
        if (pil == 1 )
        {
            topup();
            cout<<"\n"<<endl;
        }

        else if (pil == 2)
        {
            bermain();
            cout<<"\n"<<endl;
        }
        

        else if (pil == 3 )
        {
            check();
            cout<<"\n"<<endl;
        }
    
    }
    




    return 0;
}