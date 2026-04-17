#include <iostream>
using namespace std;

int main() {
    float bb, tinggi, bmi;

    cout << "Masukkan berat badan anda (kg) : " ;
    cin  >> bb;

    cout << "Masukkan tinggi anda (m) : " ;
    cin >> tinggi;

    bmi = bb / (tinggi * tinggi);

    cout << "BMI Anda adalah " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kategori berat badan: Berat badan kurang";
    }
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "Kategori berat badan: Normal";
    }
    else if (bmi >= 25 && bmi < 30) {
        cout << "Kategori berat badan: Berat badan berlebih";
    }
    else if (bmi >= 30) {
        cout << "Kategori berat badan: Obesitas";
    } else {
        cout << "Input tidak valid" << endl;
    }
    // switch (bmi) {
    //     case bmi < 18.5 :
    //         cout << "Berat badan kurang" << endl; break;
    //     case 18.5 <= bmi < 25 : 
    //         cout << "Berat badan normal" << endl; break;
    //     case 25 <= bmi < 30 :
    //         cout << "Berat badan berlebih" << endl; break;
    //     case bmi >= 30 :
    //         cout << "Obesitas" << endl; break;
    //     default : cout << "Inputan salah" << endl;

    // }
}