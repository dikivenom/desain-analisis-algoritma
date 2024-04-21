#include <iostream>
#include <string>

using namespace std;

class Bentuk {
public:
    virtual double hitungLuas() = 0;
};

class PersegiPanjang : public Bentuk {
private:
    double panjang, lebar;

public:
    PersegiPanjang(double _panjang, double _lebar) : panjang(_panjang), lebar(_lebar) {}

    double hitungLuas()  {
        return panjang * lebar;
    }
};

class Segitiga : public Bentuk {
private:
    double alas, tinggi;

public:
    Segitiga(double _alas, double _tinggi) : alas(_alas), tinggi(_tinggi) {}

    double hitungLuas()  {
        return 0.5 * alas * tinggi;
    }
};

int main() {
    double panjang, lebar, alas, tinggi;
    double luasPersegiPanjang, luasSegitiga;

    
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;

    

    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    
    
    
    cout << "\nLuas Bangun Datar:" << endl;
 

	PersegiPanjang persegiPanjang(panjang, lebar);
    luasPersegiPanjang = persegiPanjang.hitungLuas();
    cout << "Luas Persegi Panjang: " << luasPersegiPanjang << endl;

    Segitiga segitiga(alas, tinggi);
    luasSegitiga = segitiga.hitungLuas();
    cout << "Luas Segitiga: " << luasSegitiga << endl;

  
    

    return 0;
}

