#include <iostream>
#include <string> // Sertakan header <string> untuk menggunakan tipe data string
using namespace std;

struct Barang {
    string barang;
    int harga;
};

int search(const Barang daftar[], string brg) {
    for (int i = 0; i < 5; i++) {
        if (daftar[i].barang == brg) {
            return i;
        }
    }
    return -1; // Sempurnakan sintaks fungsi dengan menambahkan titik koma
}

int main() {
    string brg;
    bool ketemu = false;
    Barang daftar[5] = {
        {"Buku", 5000},
        {"Pensil", 1000},
        {"Pulpen", 2000},
        {"Penghapus", 500},
        {"Penggaris", 1500}
    };

    cout << "Masukkan barang yang ingin dicari: ";
    cin >> brg;

    int a = search(daftar, brg);

    if (a != -1) {
        cout << "Barang " << daftar[a].barang << " ditemukan dengan harga " << daftar[a].harga << endl;
    } else {
        cout << "Maaf, barang " << brg << " tidak ditemukan dalam daftar" << endl;
    }

    return 0;
}

