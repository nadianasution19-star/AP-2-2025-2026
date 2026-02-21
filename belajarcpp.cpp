#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;
    cout << "Hello World !!"<< endl;
    
    cout << "Masukkan nama : ";
    getline(cin, nama);

    cout << "Masukkan KOM : ";
    getline(cin, kom);

    cout << "Masukkan NIM : ";
    getline(cin, nim);

    cout << "Masukkan IP : ";
    getline(cin, ip);

    cout << "Masukkan jenis kelamin (L/P) : ";
    jenisKelamin = getche() // agar karakter lgsg tampil

    cout << "\n " << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    // cout << jenisKelamin << endl;
    // putchar(jenisKelamin);

    getchar();
}