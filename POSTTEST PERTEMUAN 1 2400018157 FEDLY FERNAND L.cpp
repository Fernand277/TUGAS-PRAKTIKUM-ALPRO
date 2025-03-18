#include <iostream>
#include <iomanip>

using namespace std;

// Struktur untuk menyimpan detail pembelian bensin
struct PembelianBensin {
    string nama_pelanggan;
    float liter_pertalite;
    float liter_pertamax;
    int total_harga_pertalite;
    int total_harga_pertamax;
    int total_harga;
};

int main() {
    // Harga per liter untuk Pertalite dan Pertamax
    const int harga_pertalite = 7000;
    const int harga_pertamax = 9000;

    // Membuat variabel struct
    PembelianBensin pembelian;

    // Meminta input dari pengguna
    cout << "Masukkan nama pelanggan: ";
    getline(cin, pembelian.nama_pelanggan);

    cout << "Masukkan jumlah liter Pertalite: ";
    cin >> pembelian.liter_pertalite;

    cout << "Masukkan jumlah liter Pertamax: ";
    cin >> pembelian.liter_pertamax;

    // Menghitung total harga untuk Pertalite dan Pertamax
    pembelian.total_harga_pertalite = pembelian.liter_pertalite * harga_pertalite;
    pembelian.total_harga_pertamax = pembelian.liter_pertamax * harga_pertamax;

    // Menghitung total harga keseluruhan
    pembelian.total_harga = pembelian.total_harga_pertalite + pembelian.total_harga_pertamax;

    // Menampilkan output dalam format struk
    cout << "\n--- Struk Pembelian Bensin ---" << endl;
    cout << "Nama Pelanggan: " << pembelian.nama_pelanggan << endl;
    cout << "Pertalite: " << fixed << setprecision(2) << pembelian.liter_pertalite << " liter" << endl;
    cout << "Pertamax: " << fixed << setprecision(2) << pembelian.liter_pertamax << " liter" << endl;
    cout << "Total Harga Pertalite: Rp " << pembelian.total_harga_pertalite << endl;
    cout << "Total Harga Pertamax: Rp " << pembelian.total_harga_pertamax << endl;
    cout << "Total Harga Keseluruhan: Rp " << pembelian.total_harga << endl;
    cout << "-----------------------------" << endl;

    return 0;
}
