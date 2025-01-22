#include <iostream> 

int main() {

    std::cout << "===== PROGRAM PENENTUAN NILAI RATA RATA =====" << std::endl;
    double nilaiPertama;
    double nilaiKedua;
    
    std::cout << "Nilai Pertama : ";
    std::cin >> nilaiPertama;

    std::cout << "Nilai Kedua : ";
    std::cin >> nilaiKedua;

    // => Proses Hitung
    double hasil = (nilaiPertama + nilaiKedua) / 2;

    std::cout << "Hasil Nilai Rata Rata Adalah : " << hasil << std::endl;

    return 0;
}