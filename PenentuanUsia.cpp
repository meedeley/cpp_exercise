#include <iostream>
using namespace std;

int main() {
    cout << "===== PROGRAM PENENTUAN USIA =====" << endl;

    int tahunLahir, tahunSekarang, usia;

    // Input tahun lahir
    cout << "Masukkan tahun lahir Anda: ";
    cin >> tahunLahir;

    // Input tahun sekarang
    cout << "Masukkan tahun sekarang: ";
    cin >> tahunSekarang;

    // Hitung usia
    if (tahunSekarang >= tahunLahir) {
        usia = tahunSekarang - tahunLahir;
        cout << "Usia Anda adalah " << usia << " tahun." << endl;
    } else {
        cout << "Tahun sekarang tidak boleh lebih kecil dari tahun lahir!" << endl;
    }

    return 0;
}
