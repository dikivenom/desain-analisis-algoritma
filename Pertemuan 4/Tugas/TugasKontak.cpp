#include <iostream>
#include <string>
using namespace std;

class Kontak {
private:
    string nama;
    string nomor;

public:
    Kontak() {
        nama = "";
        nomor = "";
    }

    Kontak(string namaKontak, string nomorKontak) {
        nama = namaKontak;
        nomor = nomorKontak;
    }

    ~Kontak() {
        
    }

    void masukkanKontak(string namaKontak, string nomorKontak) {
        nama = namaKontak;
        nomor = nomorKontak;
    }

    void tampilkanKontak() {
        cout << "Nama : " << nama << endl;
        cout << "Nomor Telepon : " << nomor << endl;
    }
};

int main() {
    cout << "Masukkan Kontak (maksimal 10 kontak): " << endl;
    Kontak daftarKontak[10];
    int jumlahKontak = 0;
    char tambahKontak;

    do {
        string namaKontak;
        string nomorKontak;

        cout << "Masukkan nama kontak: ";
        getline(cin, namaKontak);

        cout << "Masukkan nomor telepon kontak: ";
        getline(cin, nomorKontak);

        daftarKontak[jumlahKontak] = Kontak(namaKontak, nomorKontak);
        jumlahKontak++;

        cout << "Tambahkan kontak lagi? (y/n): ";
        cin >> tambahKontak;
        cin.ignore();
    } while (jumlahKontak < 10 && (tambahKontak == 'y' || tambahKontak == 'Y'));

    cout << "Daftar Kontak:" << endl;
    for (int i = 0; i < jumlahKontak; ++i) {
        cout << "Kontak ke-" << i + 1 << endl;
        daftarKontak[i].tampilkanKontak();
    }

    return 0;
}

