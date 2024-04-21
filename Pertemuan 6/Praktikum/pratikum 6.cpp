#include <iostream>
using namespace std;

class data{
	private:
		int usia[100];
		float ipk[100];
		string nama[100];
		
	public:
		data(int a[], string b[], double c[], int j){
			for (int m=0;m<j; m++){
					usia [m]= a[m];
			nama [m]= b[m];
			ipk [m]= c[m];
			}
		
		}
		
//		void setnama(string b){
//			nama = b;
//		}
//		
//		void setusia(int a){
//			usia = a;
//		}
//		
//		void setipk(double c){
//			ipk = c;
//		}
		
		
		string getnama(){
			return nama[];
		}
		
		double getipk(){
			return ipk;
		}
		
		int getusia(){
			return usia;
		}
		
};



int main(){
	int usia[100],a;
	double ipk[100],c;
	string nama[100],b;
	
	string mahasiswa[100];
	cout<<"Masukan jumlah mahasiswa";
	cin>>a;
	
	for{int i=0;i<a;i++}{
		cout<<"Mahasiswa ke "<<i+1<<endl;
		cout<<"Nama: ";
		getline(cin, b);
		cout<<"Usia: ";
		cin>>usia [i];
		cout<<"IPK ";
		cin>>ipk[i];
		nama [i]=b;
			
		
	}
	data mahasiswa(usia,nama,ipk, a);
	cout << "nama :" << mahasiswa.getnama()<<endl;
	
	

}
