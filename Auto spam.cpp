#include <iostream>
#include <Windows.h>

void posisimouse() {
    std::cout << "Arahkan Cursor ke posisi yang ingin di-spam (Misalnya WhatsApp di kolom pesan)" << std::endl;
    Sleep(8000);
    POINT cursorPos;
    if (GetCursorPos(&cursorPos)) {
        std::cout << "Titik Koordinat: X=" << cursorPos.x << ", Y=" << cursorPos.y << std::endl;
    }
}

void spam() {
    std::string kata;
    int berapa, x, y;
    
    std::cout << "Masukkan Kata: ";
    std::getline(std::cin >> std::ws, kata);
    
    std::cout << "Berapa kali: ";
    std::cin >> berapa;
    
    std::cout << "Masukkan Koordinat x: ";
    std::cin >> x;
    
    std::cout << "Masukkan Koordinat y: ";
    std::cin >> y;
    
    Sleep(2000);
    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    
    for (int i = 0; i < berapa; i++) {
        keybd_event(VK_MENU, 0, 0, 0);
        keybd_event(VK_TAB, 0, 0, 0);
        keybd_event(VK_TAB, 0, KEYEVENTF_KEYUP, 0);
        keybd_event(VK_MENU, 0, KEYEVENTF_KEYUP, 0);
        
        Sleep(100);
        
        for (char c : kata) {
            keybd_event(c, 0, 0, 0);
            keybd_event(c, 0, KEYEVENTF_KEYUP, 0);
        }
        
        keybd_event(VK_RETURN, 0, 0, 0);
        keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
        
        Sleep(100);
    }
}

void tutor() {
    std::cout << "1. Pilih menu melihat titik koordinat, dan langsung arahkan cursor ke tempat" << std::endl;
    std::cout << "   yang diinginkan (Misalnya kolom pesan WhatsApp) secara cepat" << std::endl;
    Sleep(5000);
    std::cout << "2. Setelah itu akan muncul titik koordinat x dan y contoh (x = 1090, y = 900)" << std::endl;
    Sleep(5000);
    std::cout << "3. Pilih menu spam di menu pilihan dan ikuti inputan yang disuruh" << std::endl;
    Sleep(5000);
    std::cout << "4. Nah nanti ada inputan x dan y, masukkan sesuai titik koordinat yang sudah muncul" << std::endl;
    Sleep(5000);
    std::cout << "                  !!!!SELAMAT MENCOBA!!!!" << std::endl;
    Sleep(5000);
    std::cout << std::endl;
}

void menu() {
    while (true) {
        std::cout << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "=======   Auto Spam by Evan v1.2  =======" << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << std::endl;
        std::cout << "Selamat Datang di Menu Pilihan" << std::endl;
        std::cout << "1. Melihat titik Koordinat" << std::endl;
        std::cout << "2. Spam" << std::endl;
        std::cout << "3. Tutorial" << std::endl;
        std::string pilihan;
        std::cout << "Masukkan pilihan: ";
        std::getline(std::cin >> std::ws, pilihan);
        std::cout << std::endl;
        
        if (pilihan == "1") {
            posisimouse();
        } else if (pilihan == "2") {
            spam();
        } else if (pilihan == "3") {
            tutor();
        } else {
            break;
        }
    }
}

int main() {
    menu();
    return 0;
}

