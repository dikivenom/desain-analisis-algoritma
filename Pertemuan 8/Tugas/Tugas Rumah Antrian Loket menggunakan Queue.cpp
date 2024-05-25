#include<iostream>
using namespace std;

struct antrianLoket{
    int antrianOrang;
    string nama;
    antrianLoket *next;
} *head, *newNode, *temporaryNode, *currentnode, *tail;


void antrianbaru(int);
void enqueue(antrianLoket *);
void dequeue();
void cetakAntrian();
bool isEmpty();
void clear();


int main(){
    head = tail = NULL;
    char pilihan;
    bool ongoing = true;
    int antrianOrang = 1;

    while(ongoing){
        cout << endl;
    
        cout << "SISTEM ANTRIAN LOKET" << endl;
        cout << "1. Tambah Tiket Pelanggan" << endl;
        cout << "2. Layani Tiket" << endl;
        cout << "3. Lihat Antrian Loket Saat Ini " << endl;
        cout << "4. Exit sistem" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;
        switch (pilihan){
            case '1':
                antrianbaru(antrianOrang);
                antrianOrang++;
                break;
            case '2':
                dequeue();
                break;
            case '3':
                cetakAntrian();
                break;
            case '4':
                cout << "Program selesai." << endl;
                ongoing = false;
                break;
            default:
                cout << "Input Salah." << endl;
                break;
        }
    } 

     return 0;
} 
void antrianbaru(int antrianOrang){
    string inputNama;

    cout << "masukkan nama pelanggan: ";
    cin >> inputNama;

    newNode = new antrianLoket();
    newNode->antrianOrang = antrianOrang;
    newNode->nama = inputNama;
    newNode->next = NULL;

    enqueue(newNode);
}

bool isEmpty(){
    if(head == NULL){
        return true;
    } else {
        return false;
    }
}

void enqueue(antrianLoket *newNode){
    if(isEmpty()){
      
        head = tail = newNode;
    }else{
        
        tail->next = newNode;
        tail = newNode;
    }

    cout << " Tiket milik " << newNode->nama << " berhasil dicetak" << endl; 
}

void dequeue(){
    if(isEmpty()){
        cout << "Antrian Kosong." << endl;
    }else{
        currentnode = head;
        cout << "Tiket milik " << currentnode->nama;
        cout << " telah " << " digunakan" << endl; 
        head = head->next;
    }
}

void cetakAntrian(){
    cout << "\nSISTEM ANTRIAN LOKET" << endl;
 
    if(isEmpty()){ 
        cout << "Antrian Loket Kosong " << endl;
    }else{
        currentnode = head;
        cout << "Antrian saat ini : " << endl;
        while(currentnode != NULL){
            cout << currentnode->antrianOrang << ".  " << currentnode->nama << endl;
            currentnode = currentnode->next; 
        }
        
    }
}

void clear(){
    currentnode = head;
    while(currentnode != NULL){
        temporaryNode = currentnode;
        temporaryNode->next = NULL;
        currentnode = currentnode->next;
    }
    head = NULL;
    temporaryNode == NULL;
    cout << "Antrian telah dihapus dan di-reset ke semula." << endl;
}
