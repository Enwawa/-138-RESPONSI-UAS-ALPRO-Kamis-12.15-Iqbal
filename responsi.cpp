#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

const int MAX_BUKU = 100;

struct Buku{
	int nomor;
	string judul;
	string penulis;
	int stok;
};

class Perpus{
	public:
		void inputData();
		void cariPenulis();
		void cariJudul();
		void stokKurang();
		void stokTerbanyak();
		void sortAZ();
		void sortZA();
		void bacaData();
};



void inputData(){
	Buku b;
	ofstream data("dataBuku.txt" , ios::app);
	
	cout <<"=== INPUT DATA BUKU ===\n";
	cout <<"Masukan nomor buku: ";
	cin >> b.nomor;
	cin.ignore();
	cout <<"Masukan judul buku: ";
	getline(cin, b.judul);
	cout <<"Masukan penulis buku: ";
	getline(cin, b.penulis);
	cout <<"Masukan stok buku: ";
	cin >> b.stok;
	
	data << "Nim		: " << b.nomor << endl;
	data << "Judul		: " << b.judul << endl;
	data << "Penulis		: "<< b.penulis << endl;
	data << "Stok		: "<< b.stok << endl;
	data << "==============================="<< endl;
}
	
int main(){
	int pilih;
	do{
		cout << "=== INVENTARIS PERPUSTAKAAN ===\n";
		cout << "1. Masukkan data buku\n";
		cout << "2. Cari Buku berdasarkan Penulis\n";
		cout << "3. Cari buku berdasarkan Judul\n";
		cout << "4. Tampilkan semua buku dengan stok kurang dari 5\n";
		cout << "5. Tampilkan stok terbanyak\n";
		cout << "6. Mengurutkan judul buku A-Z\n";
		cout << "7. Mengurutkan judul buku Z-A\n";
		cout << "0. Keluar\n";
		cout << "Masukkan pilihan: ";
		cin >> pilih;
		
		switch (pilih){
			case 1: inputData(); break;
			case 2: break;
			case 3: break;
			case 4: break;
			case 5: break;
			case 6: break;
			case 7: break;
		}
	} while(pilih != 0);
}
