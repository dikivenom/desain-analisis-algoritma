#include <iostream>
using namespace std;

void tampilArray(int array[], int jumlahElemen) {
    for(int i = 0; i < jumlahElemen; i++) {
        cout << array[i] << " ";
    }
}

int main() {
    int jumlahElemen;
    cout << "Masukkan jumlah elemen array: ";
    cin >> jumlahElemen;

    int arrayAngka[jumlahElemen];
    
    for(int i = 0; i < jumlahElemen; i++) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> arrayAngka[i];
    }
    
    cout << endl;

    // Proses Sorting Bubble Sort dari terkecil ke terbesar
    for(int i = 0; i < jumlahElemen; i++) {
        for(int j = 0; j < jumlahElemen - i - 1; j++) {
            if(arrayAngka[j] > arrayAngka[j + 1]) {
                int temp = arrayAngka[j];
                arrayAngka[j] = arrayAngka[j + 1];
                arrayAngka[j + 1] = temp;
            }
        }
        cout << endl;
        cout << "Proses Sorting ke " << i + 1 << ": ";
        tampilArray(arrayAngka, jumlahElemen);
    }
    
    cout << "\nHasil Akhir : " << endl;
    tampilArray(arrayAngka, jumlahElemen);
    return 0; 
}

