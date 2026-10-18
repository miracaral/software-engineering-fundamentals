#include <iostream>
#include <string>

void selamKomutu() {
    std::cout << "Merhaba! CLI programina hos geldin.\n";
}

void yardimKomutu() {
    std::cout << "Kullanilabilir komutlar:\n";
    std::cout << "  selam   - Selamlasir\n";
    std::cout << "  yardim  - Yardim mesajini gosterir\n";
}

int main(int argc, char* argv[])
{
    if (argc < 2) {
        std::cerr << "Kullanim: ./program <komut>\n";
        return 1;
    }

    std::string komut = argv[1];

    if (komut == "selam") {
        selamKomutu();
    } else if (komut == "yardim") {
        yardimKomutu();
    } else {
        std::cerr << "Bilinmeyen komut: " << komut << "\n";
        std::cerr << "Yardim icin './program yardim' yaz\n";
    }

    return 0;
}
