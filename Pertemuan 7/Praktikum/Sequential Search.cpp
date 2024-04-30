#include <iostream>
using namespace std;

int main() {
    int Nilai[20]; 
    int Posisi[20];
    int i, n, Bill, jmlh = 0;
    bool ketemu = false; 

    cout << "Masukkan jumlah deret bilangan = ";
    cin >> n;
    cout << endl;


    for(i = 0; i < n; i++) {
        cout << "Nilai bilangan ke-" << i << " = ";
        cin >> Nilai[i];
    }

    cout << "\nMasukkan bilangan yang ingin dicari = ";
    cin >> Bill;


    cout << "\nDeret Bilangan = ";
    for(i = 0; i < n; i++) {
        cout << Nilai[i] << " ";
        if(Nilai[i] == Bill) {
            ketemu = true;
            Posisi[jmlh] = i;
            jmlh++;
        }
    }

    if(ketemu) {
        cout << "\nBilangan " << Bill << " ditemukan sebanyak " << jmlh << " kali";
        cout << "\npada posisi ke = ";
        for(i = 0; i < jmlh; i++) {
            cout << Posisi[i] << " ";
        }
    } else {
        cout << "\nMaaf, bilangan " << Bill << " tidak ditemukan";
    }

    return 0;
}

