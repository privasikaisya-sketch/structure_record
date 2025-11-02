#include <iostream>   // Library untuk input dan output (cout, cin)
#include <string>     // Library agar bisa memakai tipe data string
using namespace std;  // Supaya tidak perlu menulis std:: di depan cout atau cin

// Membuat struktur bernama 'Pasien' untuk menyimpan beberapa data yang berkaitan
struct Pasien {
    string nama;             // Menyimpan nama pasien
    string jenis_penyakit;   // Menyimpan jenis penyakit pasien
    string alamat;           // Menyimpan alamat pasien
    int biaya_perawatan;     // Menyimpan biaya perawatan pasien
};

int main() {
    int jumlah;      // Variabel untuk jumlah pasien
    int total = 0;   // Variabel untuk total biaya semua pasien (awal = 0)

    // Menampilkan judul program
    cout << "=== PROGRAM DATA PASIEN RUMAH SAKIT ===\n";

    // Input jumlah pasien yang akan dimasukkan
    cout << "Masukkan jumlah pasien: ";
    cin >> jumlah;         // Membaca input jumlah pasien
    cin.ignore();          // Menghapus karakter 'enter' yang tertinggal agar tidak mengganggu input berikutnya

    // Membuat array dari struct 'Pasien' sebanyak jumlah pasien
    Pasien pasien[jumlah];

    // Perulangan untuk menginput data setiap pasien
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData pasien ke-" << i + 1 << endl;

        // Input nama pasien
        cout << "Nama pasien     : ";
        getline(cin, pasien[i].nama);   // getline dipakai agar bisa membaca nama dengan spasi

        // Input jenis penyakit
        cout << "Jenis penyakit  : ";
        getline(cin, pasien[i].jenis_penyakit);

        // Input alamat pasien
        cout << "Alamat pasien   : ";
        getline(cin, pasien[i].alamat);

        // Input biaya perawatan pasien
        cout << "Biaya perawatan : Rp ";
        cin >> pasien[i].biaya_perawatan;  // Membaca angka biaya perawatan
        cin.ignore();                      // Menghapus enter agar input berikutnya tidak terlewat

        // Menambahkan biaya pasien ke total biaya keseluruhan
        total += pasien[i].biaya_perawatan;
    }

    // Menampilkan semua data pasien yang sudah diinput
    cout << "\n=== DAFTAR PASIEN DAN BIAYANYA ===\n";

    // Perulangan untuk menampilkan data pasien satu per satu
    for (int i = 0; i < jumlah; i++) {
        cout << "\nPasien ke-" << i + 1 << endl;
        cout << "Nama Pasien     : " << pasien[i].nama << endl;
        cout << "Jenis Penyakit  : " << pasien[i].jenis_penyakit << endl;
        cout << "Alamat Pasien   : " << pasien[i].alamat << endl;
        cout << "Biaya Perawatan : Rp " << pasien[i].biaya_perawatan << endl;
    }

    // Menampilkan total biaya seluruh pasien
    cout << "\n=====================================\n";
    cout << "Total biaya seluruh pasien: Rp " << total << endl;
    cout << "=====================================\n";

    return 0;  // Menandakan program berakhir dengan sukses
}
