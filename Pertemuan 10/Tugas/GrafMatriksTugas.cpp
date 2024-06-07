#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void tampilkanBiaya(const vector<vector<int> >& biayaMatriks) {
    cout << "Daftar Biaya:" << endl;
    for (size_t i = 0; i < biayaMatriks.size(); ++i) {
        for (size_t j = 0; j < biayaMatriks[i].size(); ++j) {
            cout << biayaMatriks[i][j] << "   ";
        }
        cout << endl;
    }
}

void jalurTercepat(const vector<vector<int> >& biayaMatriks, vector<int>& jalur, int& biayaMinimum) {
    int jumlahSimpul = biayaMatriks.size();
    vector<int> simpul;
    for (int i = 1; i < jumlahSimpul; i++) {
        simpul.push_back(i);
    }

    biayaMinimum = INT_MAX;
    do {
        int biayaSaatIni = 0;
        int k = 0;
        for (size_t i = 0; i < simpul.size(); i++) {
            biayaSaatIni += biayaMatriks[k][simpul[i]];
            k = simpul[i];
        }
        biayaSaatIni += biayaMatriks[k][0];

        if (biayaSaatIni < biayaMinimum) {
            biayaMinimum = biayaSaatIni;
            jalur.clear();
            jalur.push_back(0);
            jalur.insert(jalur.end(), simpul.begin(), simpul.end());
            jalur.push_back(0);
        }
    } while (next_permutation(simpul.begin(), simpul.end()));
}

int main() {
    int jumlahSimpul;
    cout << "Masukkan Jumlah Kota: ";
    cin >> jumlahSimpul;

    vector<vector<int> > biayaMatriks(jumlahSimpul, vector<int>(jumlahSimpul));
    cout << "Nilai Cost Matrix" << endl;
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << "Elemen Biaya Baris ke-: " << i + 1 << endl;
        for (int j = 0; j < jumlahSimpul; ++j) {
            cin >> biayaMatriks[i][j];
        }
    }

    tampilkanBiaya(biayaMatriks);

    vector<int> jalur;
    int biayaMinimum;
    jalurTercepat(biayaMatriks, jalur, biayaMinimum);

    cout << "Jalur Terpendek: ";
    for (size_t i = 0; i < jalur.size(); ++i) {
        cout << jalur[i] + 1;
        if (i != jalur.size() - 1) {
            cout << "-->";
        }
    }
    cout << endl << endl;

    cout << "Biaya Minimum: " << biayaMinimum << endl;

    return 0;
}

