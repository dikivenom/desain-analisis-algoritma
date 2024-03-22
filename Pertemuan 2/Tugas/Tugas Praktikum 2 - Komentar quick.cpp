#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen dalam array
void swap(int arr[], int pos1, int pos2){
	int temp;
	temp = arr [pos1];
	arr[pos1] = arr[pos2];
	arr[pos2]= temp;
}

// Fungsi untuk melakukan partisi array untuk algoritma quicksort
int partition(int arr[], int low, int high, int pivot){
	int i = low;
	int j = low;
	while (i <= high){
		if (arr[i] > pivot){
			i++;
		}
		else {
			// Jika elemen ke-i kurang dari atau sama dengan pivot, tukar elemen ke-i dengan elemen ke-j
			swap(arr, i, j);
			i++;
			j++;
		}
	}
	// Kembalikan posisi terakhir elemen yang kurang dari atau sama dengan pivot
	return j - 1;
}

// Membuat fungsi quickSort untuk mengurutkan array 
void quickSort(int arr[], int low, int high){
	if (low < high){
		int pivot = arr[high]; // Pilih pivot dari elemen terakhir
		int pos = partition(arr, low, high, pivot); // Lakukan partisi

		// Rekursif untuk bagian kiri dan kanan dari pivot
		quickSort(arr, low, pos - 1);
		quickSort(arr, pos + 1, high);
	}
}

int main(){
	int n;
	cout << "Tentukan panjang array : ";
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	quickSort(arr, 0, n - 1);
	cout <<"Berikut adalah array yang telah di sortir: ";
	for (int i = 0; i < n; i++){
		cout << arr[i] << "\t";
	}
}

