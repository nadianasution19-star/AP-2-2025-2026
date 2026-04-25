#include <iostream>
using namespace std;

void sapa(string nama){ // nama menerima parameter namaPengguna dan parameter formal
    cout << "Halo " << nama << " Selamat Datang di AP 2!" << endl;
}

int main(){
    string namaPengguna = "Alya";

    sapa(namaPengguna); // sapa(Alya) dan namaPengguna adalah parameter aktual

    return 0;
}