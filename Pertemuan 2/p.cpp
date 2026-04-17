#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int angka;

    printf("Program Menentukan Bilangan Genap atau Ganjil\n");
    printf("---------------------------------------------\n");

    cout << "Masukkan sebuah angka : ";
    cin >> angka;

    if (angka % 2 == 0) {
        printf("Angka %d adalah bilangan GENAP\n", angka);
    } 
    else {
        cout << "Angka " << angka << " adalah bilangan GANJIL" << endl;
    }

    printf("---------------------------------------------\n");
    printf("Program selesai.\n");

    
}