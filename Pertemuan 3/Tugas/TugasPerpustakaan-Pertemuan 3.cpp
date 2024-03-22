#include <iostream>
#include <string>
using namespace std;

class Orang {
	private:
		string namaPeminjam;
		string buku;
		
		public:
			
			void setNama (string n){
				namaPeminjam = n;
			}
			
			void setBuku (string m){
				buku = m;
			}
			
			string getNama(){
				return namaPeminjam;
			}
			
			string getBuku(){
				return buku;
			}
};


int main(){
	
	Orang orang;
	string nama;
		string buku;
	orang.setNama(nama);
	orang.setBuku(buku);

	
	cout<< "Masukkan Nama Peminjam :";
getline(cin,nama);
		cout << "Buku yang dipinjam : ";
getline(cin,buku);
	cout << "Nama :"<<nama<<orang.getNama()<<endl;
	cout << "Buku yang dipinjam :"<<buku<< orang.getBuku()<<endl;

	
	
}
