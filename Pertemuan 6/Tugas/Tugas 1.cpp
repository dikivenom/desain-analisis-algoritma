#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
public:
    string status, nama, jurusan, fakultas;
    int umur;

    virtual void hasilData() {
        cout << "Status Mahasiswa: " << status << endl;
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl;
    }
};

class TI : public Mahasiswa {
public:
    void hasilData() {  
    cout<<"MAHASISWA TI"<<endl;
	  cout << "Status Mahasiswa: " << status << endl;
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl;

    }
};   
    


class Vokasi : public Mahasiswa {
public:
    void hasilData() {
    	cout<<"MAHASISWA VOKASI"<<endl;
    	  cout << "Status Mahasiswa: " << status << endl;
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl;
    
    }
};
 
int main() {
    const int jumlah_mahasiswa = 2; 
    Mahasiswa mhs[jumlah_mahasiswa];

    
    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        cout << "Masukkan data mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "Status: ";
        cin >> mhs[i].status;
        cout << "Nama: ";
        cin.ignore(); 
        getline(cin, mhs[i].nama);
        cout << "Umur: ";
        cin >> mhs[i].umur;
        cin.ignore(); 
        cout << "Jurusan: ";
        getline(cin, mhs[i].jurusan);
        cout << "Fakultas: ";
       cin>> mhs[i].fakultas;
        cout << endl;
    }

    cout << endl;

  
    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        mhs[i].hasilData();
        cout << endl;
    }

    return 0;
}

