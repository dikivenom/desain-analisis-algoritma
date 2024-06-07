#include <iostream>
#include <vector>

using namespace std;

class Graf {
private:
    int jumlahSimpul;
    vector<vector<int> > listbaris;

public:
    Graf(int simpul) {
        jumlahSimpul = simpul;
        listbaris.resize(simpul);
    }

    void tambahSisi(int x, int y) {
        listbaris[x].push_back(y);
     
    }

    void tampilkan() {
        for (int i = 0; i < jumlahSimpul; ++i) {
            cout << "Simpul " << i << ":";
            for (int j = 0; j < listbaris[i].size(); j++) {
                cout << "  " << listbaris[i][j];
            }
            cout << endl;
        }
    }
};

int main() {
    int simpul = 5;

    Graf j(simpul);

    j.tambahSisi(0, 1);
    j.tambahSisi(0, 4);
    j.tambahSisi(1, 2);
    j.tambahSisi(1, 3);
    j.tambahSisi(1, 4);
    j.tambahSisi(2, 3);
    j.tambahSisi(3, 4);

    j.tampilkan();

    return 0;
}

