#include <iostream>

using namespace std;

void tampilkan(int arr[], int ukuran) {
    for (int i = 0; i < ukuran; i++) {
        cout << arr[i];
        if (i < ukuran - 1) cout << ", ";
    }
    cout << "]" << endl;
}

void merge(int arr[], int rendah, int angkaTengah, int angkaTertinggi, int& perbandingan, int& pindah) {
    int ukuranKiri = angkaTengah - rendah + 1;
    int ukuranKanan = angkaTertinggi - angkaTengah;

    int kiri[ukuranKiri];
    int kanan[ukuranKanan];

    for (int i = 0; i < ukuranKiri; i++) {
        kiri[i] = arr[rendah + i];
        pindah++;
    }
    for (int j = 0; j < ukuranKanan; j++) {
        kanan[j] = arr[angkaTengah + 1 + j];
        pindah++;
    }

    int i = 0, j = 0, k = rendah;

    while (i < ukuranKiri && j < ukuranKanan) {
        perbandingan++;
        if (kiri[i] >= kanan[j]) { 
            arr[k] = kiri[i];
            i++;
        } else {
            arr[k] = kanan[j];
            j++;
        }
        k++;
        pindah++;
    }

    while (i < ukuranKiri) {
        arr[k] = kiri[i];
        i++;
        k++;
        pindah++;
    }

    while (j < ukuranKanan) {
        arr[k] = kanan[j];
        j++;
        k++;
        pindah++;
    }
}

void mergeSort(int arr[], int rendah, int angkaTertinggi, int& perbandingan, int& pindah) {
    if (rendah < angkaTertinggi) {
        int angkaTengah = rendah + (angkaTertinggi - rendah) / 2;

        cout << "Memecah List [";
        tampilkan(arr + rendah, angkaTengah - rendah + 1);

        mergeSort(arr, rendah, angkaTengah, perbandingan, pindah);

        cout << "Memecah List [";
        tampilkan(arr + angkaTengah + 1, angkaTertinggi - angkaTengah);
        mergeSort(arr, angkaTengah + 1, angkaTertinggi, perbandingan, pindah);

        cout << "Menggabungkan List [";
        tampilkan(arr + rendah, angkaTertinggi - rendah + 1);
        merge(arr, rendah, angkaTengah, angkaTertinggi, perbandingan, pindah);
    }
}

int main() {
    int ukuran;
    cout << "Masukkan jumlah elemen: ";
    cin >> ukuran;

    int data[ukuran];
    cout << "Masukkan " << ukuran << " angka: ";
    for (int i = 0; i < ukuran; i++) {
        cin >> data[i];
    }

    int perbandingan = 0, pindah = 0;

    cout << "Data awal: [";
    tampilkan(data, ukuran);

    mergeSort(data, 0, ukuran - 1, perbandingan, pindah);

    cout << "\nData terurut secara descending: [";
    tampilkan(data, ukuran);

    return 0;
}

