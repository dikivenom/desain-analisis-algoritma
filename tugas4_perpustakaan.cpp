#include <iostream>
using namespace std;

int main() {
    const int MAX_BUKU = 100; 
    string daftarBuku[MAX_BUKU]; 
    int jumlahBuku; 

    
    cout << "Masukkan jumlah buku: ";
    cin >> jumlahBuku;

    //  menampilkan judul buku
    cout << "Masukkan dan tampilkan judul buku:" << endl;
    for (int i = 0; i < jumlahBuku; i++) {
        cout << "Judul buku ke-" << i + 1 << ": ";
        cin >> daftarBuku[i];
        cout << daftarBuku[i] << endl;
    }

    // Melakukan selection sort
    for (int i = 0; i < jumlahBuku - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < jumlahBuku; j++) {
            if (daftarBuku[j] < daftarBuku[minIndex]) {
                minIndex = j;
            }
        }
        // Tukar judul buku pada indeks i dengan judul buku pada indeks minIndex
        string temp = daftarBuku[i];
        daftarBuku[i] = daftarBuku[minIndex];
        daftarBuku[minIndex] = temp;
    }

    // Menampilkan daftar buku setelah diurutkan 
    cout << "\nDaftar buku setelah diurutkan:" << endl;
    for (int i = 0; i < jumlahBuku; i++) {
        cout << daftarBuku[i] << endl;
    }

    return 0;
}

