#include<iostream>
using namespace std;

struct perutLapar{
    int antrianMakanan;
    string nama;
    perutLapar *next;
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
    
        cout << "SISTEM PENCERNAAN PERUT" << endl;
        cout << "1. Makan Makanan Baru" << endl;
        cout << "2. Cerna Makanan" << endl;
        cout << "3. Mengingat makanan apa " << endl;
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

    cout << "masukkan nama makanan: ";
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

    cout << " makanan " << newNode->nama << " dimakan " << endl; 
}

void dequeue(){
    if(isEmpty()){
        cout << "Antrian Kosong." << endl;
    }else{
        currentnode = head;
        cout << "Makanan " << currentnode->nama;
        cout << " telah " << " dicerna" << endl; 
        head = head->next;
    }
}

void cetakAntrian(){
    cout << "\nSISTEM PENCERNAAN PERUT" << endl;
 
    if(isEmpty()){ 
        cout << "Perut Kosong " << endl;
    }else{
        currentnode = head;
        cout << "Nama makanan yang diperut : " << endl;
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
