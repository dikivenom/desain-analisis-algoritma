#include <iostream>
#include <string>
using namespace std;

class Orang {
private:
    string nama;
    int npm;

public:
    void setNama(string n) {
        nama = n;
    }

    void setNPM(int m) {
        npm = m;
    }

    string getNama() {
        return nama;
    }

    int getNPM() {
        return npm;
    }
};


int main() {
    int jumlah_orang;
    cout << "Masukkan jumlah orang: ";
    cin >> jumlah_orang;

    Orang orang[jumlah_orang];
    string nama;
    int npm;

    for (int i = 0; i < jumlah_orang; ++i) {
        cout << "Masukkan Nama orang ke-" << i + 1 << " : ";
        cin>>nama;
        orang[i].setNama(nama);
        cout << "Masukkan NPM orang ke-" << i + 1 << " : ";
        cin >> npm;
        orang[i].setNPM(npm);
    }

    for (int i = 0; i < jumlah_orang; ++i) {
        cout << "Orang ke-" << i + 1 << ":" << endl;
        cout << "Nama: " << orang[i].getNama() << endl;
        cout << "NPM: " << orang[i].getNPM() << endl;
    }

    return 0;
}

