#include <iostream>

/*
* Program Konversi Suhu Dari Celcius Ke Fahrenheit Ataupun Sebaliknya
* Dalam Program Ini Akan Mempelajari Pengkondisian IF Dan Operator Logika
 */

int main() {
    

    std::cout << "========== PROGRAM KONVERSI SUHU ==========" << std::endl;

    std::cout << " " << std::endl;
    
    // Deklarasi Variable
    int pilih;
    float suhu;
    float hasil = 0; // default value

    std::cout << "===== PILIH JENIS KONVERSI SUHU =====" << std::endl;
    std::cout << "1. Celcius Ke Farenheit" << std::endl;
    std::cout << "2. Farenheit Ke Celcius" << std::endl;
    
    std::cout << "Masukan Pilihan (1/2) : ";
    std::cin >> pilih;

    if(!pilih || (pilih != 1 && pilih != 2)) {{
        std::cout << "Pilihan Tidak Valid, Program Terhenti" << std::endl;
        return 1;
    }}

    if(pilih == 1) {
        std::cout << "===== KONVERSI CELCIUS KE FARENHEIT =====" << std::endl;
        std::cout << "Masukan Suhu : ";
        std::cin >> suhu;
        hasil = (suhu * 9 / 5) + 32;

        std::cout << "Hasil Konversi Celcius Ke Farenheit : " << hasil << " Farenheit" << std::endl;
    } else {
        std::cout << "===== KONVERSI FARENHEIT KE CELCIUS =====" << std::endl;
        std::cout << "Masukan Suhu : ";
        std::cin >> suhu;

        hasil = (suhu - 32) * 5 / 9;
        std::cout << "Hasil Konversi Farenheit Ke Celcius : " << hasil << " Celcius" << std::endl;
    }

    return 0;
}