#include <iostream>
using namespace std;

void tampilkan(int arr[], int ukuran) {
    cout << "[";
    for (int i = 0; i < 10; i++) {
        cout << arr[i];
        if (i != ukuran - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int partisi(int arr[], int terendah, int tertinggi) {
    int pivot = arr[tertinggi];
    int i = terendah - 1;

    for (int j = terendah; j < tertinggi; j++) {
        if (arr[j] > pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[tertinggi]);
    return i + 1;
}

void quickSort(int arr[], int terendah, int tertinggi) {
    if (terendah < tertinggi) {
        int pi = partisi(arr, terendah, tertinggi);

        tampilkan(arr, tertinggi + 1);

        quickSort(arr, terendah, pi - 1);
        quickSort(arr, pi + 1, tertinggi);
    }
}

int main() {
    int data[] = {67, 91, 87, 33, 49, 10, 16, 43, 65, 3};
    int ukuran = sizeof(data) / sizeof(data[0]);

    cout << "Data yang akan di sort: ";
    tampilkan(data, ukuran);
    cout << endl;

    cout << "Quick Sort: " << endl;
    quickSort(data, 0, ukuran - 1);

    return 0;
}

