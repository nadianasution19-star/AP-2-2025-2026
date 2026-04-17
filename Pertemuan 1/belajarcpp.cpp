#include  <iostream> //header standar c++, canio.h 
#include <conio.h>  //header untuk getche() fan getch()
using namespace std;

int main () {

    string nama;
    char kom , jenis_kelamin;
    int nim;
    float ip;

    cout<<"hello world " << endl;

    cout<<"masukan nama : ";
    //cin >> nama;
    getline(cin,nama); //agar karakter spasi bisa terbaca
    
    cout<<"masukan kom : ";
    cin >> kom;
    
    cout<<"masukan nim : ";
    cin >> nim;
    
    cout<<"masukan ip : ";
    cin >> ip;

    cout << "masukan jenis kelamin : "; //getche
    jenis_kelamin = getche(); //agar karakter langsung tampil, jadi ga perlu tekan enter
    
    cout << "\n " << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    //cout << jenis_kelamin << endl;

    putchar(jenis_kelamin); //untuk menampilkan karakter <jenis kelamin>
  
    getch(); //karakter yang ingin di tampilkan
}