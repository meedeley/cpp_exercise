#include <iostream>
#include <fstream>
#include <string>
#include <ios>

void writeFile()
{
    std::ofstream sayName;

    sayName.open("name.txt", std::ios::out);

    std::string name;
    std::cout << "===== Tulis Inputan Anda : ";
    std::cin >> name;

    std::cout << "Anda Menulis : " << name << std::endl;

    sayName << name;

    sayName.close();
}

void readFile()
{
    std::ifstream getName;
    getName.open("name.txt", std::ios::in);
    std::string line;

    while (std::getline(getName, line))
    {
        std::cout << line << std::endl;
    }
    getName.close();
}

int main()
{
    std::cout << "===== PILIH MENU PILIHAN =====" << std::endl;
    std::cout << "1. Tulis File" << std::endl;
    std::cout << "2. Read File" << std::endl;
    int choice;
    std::cout << "===== Pilih Menu : ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "===== ANDA MEMILIH MENULIS FILE =====" << std::endl;
        writeFile();
        break;
    case 2:
        std::cout << "===== ANDA MEMILIH MEMBACA FILE =====" << std::endl;
        readFile();
        break;
    default:
        std::cout << "===== Menu Pilihan Anda Tidak Valid" << std::endl;
    }
    return 0;
}