#include <iostream>

int main() {
    int ascii = 0;

    std::cout << "ASCII Value | Character" << std::endl;
    std::cout << "----------------------" << std::endl;

    while (ascii <= 255) {
        std::cout << "     " << ascii << "     |    " << static_cast<char>(ascii) << std::endl;
        ascii++;
    }

    return 0;
}