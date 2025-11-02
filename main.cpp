#include <iostream>
#include <string>
using namespace std;

struct Pasien {
    string nama;
    string jenis_penyakit;
    string alamat;
    int biaya_perawatan;
};

int main() {
    int jumlah;
    int total = 0;

    cout << "=== PROGRAM DATA PASIEN RUMAH SAKIT ===\n";
    cout << "Masukkan jumlah pasien: ";
    cin >> jumlah;
    cin.ignore();

    Pasien pasien[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData pasien ke-" << i + 1 << endl;
        cout << "Nama pasien     : ";
        getline(cin, pasien[i].nama);
        cout << "Jenis penyakit  : ";
        getline(cin, pasien[i].jenis_penyakit);
        cout << "Alamat pasien   : ";
        getline(cin, pasien[i].alamat);
        cout << "Biaya perawatan : Rp ";
        cin >> pasien[i].biaya_perawatan;
        cin.ignore();
        total += pasien[i].biaya_perawatan;
    }

    cout << "\n=== DAFTAR PASIEN DAN BIAYANYA ===\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "\nPasien ke-" << i + 1 << endl;
        cout << "Nama Pasien     : " << pasien[i].nama << endl;
        cout << "Jenis Penyakit  : " << pasien[i].jenis_penyakit << endl;
        cout << "Alamat Pasien   : " << pasien[i].alamat << endl;
        cout << "Biaya Perawatan : Rp " << pasien[i].biaya_perawatan << endl;
    }

    cout << "\n=====================================\n";
    cout << "Total biaya seluruh pasien: Rp " << total << endl;
    cout << "=====================================\n";

    return 0;
}
