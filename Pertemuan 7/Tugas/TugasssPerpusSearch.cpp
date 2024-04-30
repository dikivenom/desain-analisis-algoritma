#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Perpustakaan {
    string namaBuku;
    int rakBuku;
};


int binarysearch(const Perpustakaan perpus[],  int r, string valuePerpus) {
    int l = 0;
    int R = r - 1;
    while (l <= R) {
        int mid = (l + R) / 2;
        if (valuePerpus == perpus[mid].namaBuku) {
            return mid;
        }
        if (valuePerpus > perpus[mid].namaBuku) {
            l = mid + 1;
        } else {
            R = mid - 1;
        }
    }
    return -1;
}

int main() {
    int Index, jmlArray;
    string Buku;
    Perpustakaan perpus[] = {
        {"B-Indo", 1},
        {"Cerpen", 2},
        {"Novel", 3},
        {"PKN", 4},
    };
    jmlArray = sizeof(perpus) / sizeof(perpus[0]);
    
  
    
    
    for (int i = 0; i < jmlArray; i++) {
        cout << "Judul Buku : " << perpus[i].namaBuku
            << " Rak ke- " << perpus[i].rakBuku << endl;
    }
    
    cout << "Masukkan Judul Buku yang ingin dicari = ";
    cin >> Buku;
    
    Index = binarysearch(perpus,  jmlArray,Buku);
    
    if (Index != -1)
        cout << "Buku dengan Judul " << Buku << " berada pada Rak ke-" << perpus[Index].rakBuku << endl;
    else
        cout << "Buku tidak ditemukan." << endl;
    
    return 0;
}

