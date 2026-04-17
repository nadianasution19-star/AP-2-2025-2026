#include <iostream> 
using namespace std;

int main()
{
    float r, volume, luas;
const float pi = 3.14;

cout << "Masukkan jari-jari : ";
cin >> r;

volume = (float)4 / (float)3 * pi * r * r * r;
luas = 4 *pi * r* r;

cout << " Volume Bola = " << volume << endl;
cout << "Luas Bola = " << luas << endl;

}


