#include <iostream>
using namespace std;

// Fungsi  merge disini untuk menggabungkan dua subarray terurut menjadi satu array terurut
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1; // Ukuran  kiri
    int n2 = r - m;     // Ukuran  kanan

    int L[n1], R[n2];   // Membuat array sementara untuk subarray kiri dan kanan

    // Salin data ke subarray kiri
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    
    // Salin data ke subarray kanan
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0; // Index untuk subarray kiri
    int j = 0; // Index untuk subarray kanan
    int k = l; // Index untuk subarray gabungan

    // Gabungkan subarray kiri dan kanan menjadi satu array terurut
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Salin sisa elemen dari subarray kiri (jika ada)
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Salin sisa elemen dari subarray kanan (jika ada)
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi rekursif untuk melakukan pengurutan merge sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2; // Temukan titik tengah array
        
        // Rekursif untuk subarray kiri dan kanan
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Gabungkan dua subarray yang terurut
        merge(arr, l, m, r);
    }
}

// Fungsi untuk menampilkan elemen array
void show(int A[], int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Masukkan Banyak Data : ";
    cin >> size;
    int arr[size];

    // Input elemen array dari pengguna
    for (int i = 0; i < size; ++i) {
        cout << "Masukkan Data array ke " << i << " :";
        cin >> arr[i];
    }

    // Panggil fungsi mergeSort untuk mengurutkan array
    mergeSort(arr, 0, size - 1);

    // Tampilkan hasil pengurutan
    cout << "Hasil\n";
    show(arr, size);
    return 0;
}

