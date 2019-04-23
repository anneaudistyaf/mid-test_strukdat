/*
NAMA PROGRAM	: UTS
NAMA			: Anne Audistya Fernanda
NPM				: 140810180059
KELAS			: A
TANGGAL			: 23 April 2019
*/

/*
chubu = miyazaki
furano = hokkaido
hirado = nagasaki
minamiuwa = ehime
toho = suginami
*/

#include <iostream>

using namespace std;

struct ElemtList {
	char no_daftar;
	string tim;
	string asal;
	int gol;
	ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer List;

void createList (List& First){
	First = NULL;
}

void createElemt (pointer& pBaru){
	pBaru = new ElemtList;
	cout << "Masukkan no. Daftar : ";
	cin >> pBaru->no_daftar;
	cout << "Masukkan Nama Tim : ";
	cin >> pBaru->tim;
	cout << "Masukkan Asal Daerah Tim : ";
	cin >> pBaru->asal;
	cout << "Masukkan Jumlah gol : ";
	cin >> pBaru->gol;
	pBaru->next = pBaru;
}

void insertLast(List& First, pointer pBaru){
    pointer last;
    if(First==NULL){
        First=pBaru;
    }
    else{
        last=First;
    while(last->next!=First){
        last=last->next;
    }
    last->next=pBaru;
    pBaru->next=First;
 }
}
 
void traversal (List First) {
	pointer pBantu;
	pBantu = First;
	while (pBantu->next != First) {
		cout << "No. Daftar : " << pBaru->daftar << endl;
		cout << "Nama Tim : " << pBaru->tim << endl;
		cout << "Asal Daerah : " << pBaru->asal << endl;
		cout << "Masukkan jumlah gol : " << pBaru->gol << endl;
		pBaru-> next = pBaru; 
	}
}

int main () {
	pointer pBaru, last, pBantu;
	string tim, asal;
	char no_daftar;
	int gol;
	List First;
	int n; 
	
	cout << "Masukkan jumlah data :";
	cin >> n;
	
	createList (First);
	for (int i = 0; i<n; i ++) {
		createElemt (pBaru);
		insertLast (First, pBaru);
	}
	insertLast (First, pBaru);
	traversal (First);
}

