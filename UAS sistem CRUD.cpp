#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

struct Mahasiswa {
    string nama;
    int usia;
    string jurusan;
};

void tambahData(Mahasiswa data[], int& jumlahData) {
    if (jumlahData < MAX_SIZE) {
        Mahasiswa mhs;
        cout << "Masukkan Nama: ";
        cin >> mhs.nama;
        cout << "Masukkan Usia: ";
        cin >> mhs.usia;
        cout << "Masukkan Jurusan: ";
        cin >> mhs.jurusan;
        data[jumlahData++] = mhs;
        cout << "Data berhasil ditambahkan!" << endl;
    } else {
        cout << "Database penuh! Tidak dapat menambah data baru." << endl;
    }
}

void tampilkanData(const Mahasiswa data[], int jumlahData) {
    if (jumlahData > 0) {
        cout << "Daftar Mahasiswa:" << endl;
        for (int i = 0; i < jumlahData; i++) {
            cout << "Nama: " << data[i].nama << endl;
            cout << "Usia: " << data[i].usia << endl;
            cout << "Jurusan: " << data[i].jurusan << endl;
            cout << "-------------------------" << endl;
        }
    } else {
        cout << "Database kosong! Belum ada data mahasiswa." << endl;
    }
}

void ubahData(Mahasiswa data[], int jumlahData) {
    if (jumlahData > 0) {
        string namaCari;
        cout << "Masukkan Nama Mahasiswa yang akan diubah: ";
        cin >> namaCari;
        int indeks = -1;
        for (int i = 0; i < jumlahData; i++) {
            if (data[i].nama == namaCari) {
                indeks = i;
                break;
            }
        }
        if (indeks != -1) {
            cout << "Data sebelum diubah:" << endl;
            cout << "Nama: " << data[indeks].nama << endl;
            cout << "Usia: " << data[indeks].usia << endl;
            cout << "Jurusan: " << data[indeks].jurusan << endl;

            cout << "Masukkan data baru:" << endl;
            cout << "Nama: ";
            cin >> data[indeks].nama;
            cout << "Usia: ";
            cin >> data[indeks].usia;
            cout << "Jurusan: ";
            cin >> data[indeks].jurusan;

            cout << "Data berhasil diubah!" << endl;
        } else {
            cout << "Data mahasiswa dengan nama " << namaCari << " tidak ditemukan." << endl;
        }
    } else {
        cout << "Database kosong! Belum ada data mahasiswa." << endl;
    }
}

void hapusData(Mahasiswa data[], int& jumlahData) {
    if (jumlahData > 0) {
        string namaCari;
        cout << "Masukkan Nama Mahasiswa yang akan dihapus: ";
        cin >> namaCari;
        int indeks = -1;
        for (int i = 0; i < jumlahData; i++) {
            if (data[i].nama == namaCari){
                indeks = i;
                break;
            }
        }
        if (indeks != -1) {
            for (int i = indeks; i < jumlahData - 1; i++) {
                data[i] = data[i + 1];
            }
            jumlahData--;
            cout << "Data berhasil dihapus!" << endl;
        } else {
            cout << "Data mahasiswa dengan nama " << namaCari << " tidak ditemukan." << endl;
        }
    } else {
        cout << "Database kosong! Belum ada data mahasiswa." << endl;
    }
}

int main() {
    Mahasiswa data[MAX_SIZE];
    int jumlahData = 0;
    int pilihan;

    do {
        cout << "Program CRUD Data Mahasiswa" << endl;
        cout << "---------------------------" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Ubah Data" << endl;
        cout << "4. Hapus Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahData(data, jumlahData);
                break;
            case 2:
                tampilkanData(data, jumlahData);
                break;
            case 3:
                ubahData(data, jumlahData);
                break;
            case 4:
                hapusData(data, jumlahData);
                break;
            case 0:
                cout << "Terima kasih! Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
        cout << endl;
    } while (pilihan != 0);

    return 0;
}
