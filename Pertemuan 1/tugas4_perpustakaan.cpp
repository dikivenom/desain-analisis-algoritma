#include <iostream>
using namespace std;

int main() {
    const int maxArrayBuku = 100; 
    string listBuku[maxArrayBuku]; 
    int jmlBuku; 

    
    cout << "Masukkan jumlah buku: ";
    cin >> jmlBuku;

   
    cout << "Masukkan dan tampilkan judul buku:" << endl;
    for (int i = 0; i < jmlBuku; i++) {
        cout << "Judul buku ke-" << i + 1 << ": ";
        cin >> listBuku[i];
        cout << listBuku[i] << endl;
    }

    // Melakukan selection sort
    for (int i = 0; i < jmlBuku - 1; i++) {
        int hurufArray = i; 
        for (int j = i + 1; j < jmlBuku; j++) {
            if (listBuku[j] < listBuku[hurufArray]) {
                hurufArray = j;
            }
        }
     //Penukaran
        string temp = listBuku[i];
        listBuku[i] = listBuku[hurufArray]; 
        listBuku[hurufArray] = temp;
    }

    // Menampilkan daftar buku setelah diurutkan 
    cout << "\nDaftar buku setelah diurutkan:" << endl;
    for (int i = 0; i < jmlBuku; i++) {
        cout << listBuku[i] << endl;
    }

    return 0;
}
