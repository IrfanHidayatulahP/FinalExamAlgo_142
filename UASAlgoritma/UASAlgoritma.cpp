#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
string jurusan[MAX_MAHASISWA];
int jumlahMahasiswa = 0;


void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM			: ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama			: ";
		cin >> nama[jumlahMahasiswa];
		cout << "Tahun Masuk	: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();

		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
}

void tampilkanSemuaMahasiswa() {
	return;
}

void algorithmacariMahasiswaByNIM() {
	cout << "Masukan NIM yang Ingin Anda Cari: " << NIM[jumlahMahasiswa] << endl;
}

void algorithmaSortByTahunMasuk(int tahunMasuk) {

}


int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1:
			void tambahMahasiswa();
			break;
		case 2: 

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:
			cout << "Terima Kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan Tidak Valid. Silahkan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}


//
//3. Algoritma Stack berupa tumpukan data yang dimana jika dipanggil datanya yang pertama keluar adalah data yang berada paling akhir dimasukkan(LIFO),
//   sedangkan Queues berupa antrian data yang dimana jika dipanggil datanya yang pertama keluar adalah data yang pertama dimasukkan(FIFO).
//4. Saat dimana seseorang ingin memanggil kembali data sebelumnya.
//5. a. 4 level
//   b. In = benar, Preorder = salah, Post = benar. 
