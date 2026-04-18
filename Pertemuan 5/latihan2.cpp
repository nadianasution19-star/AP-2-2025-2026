#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> nama = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};
    for(int i = 0; i < nama.size(); i++){
            cout << nama[i] << endl;
    }
        cout << endl;

    nama.push_back("Houra");
    nama.pop_back();

    nama.erase(nama.begin() + 1);

    cout << "Setelah perubahan :" << endl;
    for(int i = 0; i < nama.size(); i++){
            cout << nama[i] << endl;
    }

    cout << "Jumlah data yang tersisa : " << nama.size() << endl;
}