#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
   int info;
   struct node *link ;
};

// Menampilkan node
void display(struct node *start){
    struct node *p;

    if (start == NULL)
    {
        cout<<"Link list masih kosong" <<endl ;
        return;
    };

    p = start ;
    while (p != NULL)
    {
        cout<< p-> info << " , " ;
        p = p -> link ;
    }

    cout <<endl;
}

// Menambahkan nide di awal
struct node *sisipawal( struct node *start,int data){
    struct node *temp ;
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> info = data ;
    temp -> link = start ;
    start = temp;
    return start;
}

// Menambahkan node di akhir
void sisipakhir(struct node *start,int data){
    struct node *temp,*p ;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info=data;
    p=start;
    while (p->link!=NULL)
    {
        p = p->link;
    }
    p->link = temp;
    temp->link = NULL;
    
}

//menghapus elemen tertentu

struct node *del(struct node *start,int data){
    struct node *temp, *p;

    if (start == NULL)
    {
        cout<<"Linked list kosong\n";
        return start;
    }
    // apabila node dihapus berada di awal
    if (start ->info==data)
    {
        temp = start;
        start = start ->link ;
        free(temp);
        return start;
    }

    //apabila node yang dihapus berada di tengah atau di akhir 
    p=start;
    while (p->link != NULL)
    {
        if (p->link->info == data)
        {
            temp = p->link;
            p->link=temp->link;
            free(temp);
            return start;
        }
        p = p ->link;
    }
    cout << "data" << data <<"pada linked list tidak ditemukan";
    return start;
    
}

// Menghitung jumlah node
void count(struct node *start){
    int count = 0;
    struct node *p;
    p = start;

    while (p!=NULL)
    {
       p = p->link;
       count ++;
    }
    cout <<"Jumlah node adalah " << count;
}


int main (){
    struct  node *start = NULL;
    int choice ,data;

    while (true)
    {
        cout<<"1.Menampilkan node "<<endl;
        cout<<"2.Menyisipkan node di awal "<<endl;
        cout<<"3.Menyisipkan node di akhir "<<endl;
        cout<<"4.Menghapus elemen tertentu node"<<endl;
        cout<<"5.Menghitung jumlah node"<<endl;
        cout<<"Input pilihan : " ;
        cin >> choice ;
        cout<<endl;


        switch (choice)
        {
        case 1:
            display(start);
            cout<< endl;
            break;
        case 2:
            cout<< "Inputkan bilangan untuk disisipkan di awal link list : ";
            cin>>data;
            start = sisipawal(start,data);
            cout<<endl;
            break;
        case 3:
            cout<< "Inputkan bilangan untuk disisipkan di akhir link list : ";
            cin>>data;
            sisipakhir(start,data);
            cout<<endl;
            break;
        case 4:
            cout << "Inputkan bilangan yang akan di hapus: " <<endl;
            cin >> data;
            start = del(start,data);
            cout << endl;
            break;
        case 5:
            count(start);
            cout<<endl;
            break;
        default:
        cout<<"Pilihan tidak valid"<<endl;
            break;
        }
    }
    
    
}
