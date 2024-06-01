#include <iostream>
using namespace std;

struct TreeNode {
	int data;
	TreeNode* left;
	TreeNode* right;
	
	//Konstruktor untuk membuat node baru
	TreeNode(int value): data(value), left(NULL), right(NULL) {
	}
};

int main (){
	//Membuat simpul-simpul pohon
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	
	
	//Menampilkan nilai simpul-simpul pohon
	cout<< "Nilai simpul-simpul pohon:" <<endl;
	cout<< "Akar: "<< root->data << endl;
	cout << "Anak kiri dari Akar: "<< root->left->data<< endl;
	cout << "Anak kanan dari Akar: "<< root->right->data<< endl;
	cout << "Anak Kiri dari Anak Kiri dari akar: "<< root->left->left->data<< endl;
	cout << "Anak Kanan dari Anak kiri dari akar: " << root->left->right->data << endl;
	
	//Membersihkan memori
	delete root->left->left;
	delete root->left->right;
	delete root->left;
	delete root->right;
	delete root;
	
	return 0;
}
