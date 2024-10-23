#include <iostream>
#include "app.h"



int main() {
    vsite::oop::v2::color c;
    double r, g, b;
    std::cout << "Unesite komponentu crvene (R) [0.0 - 1.0]: ";
    std::cin >> r;
    c.set_red(r);

    std::cout << "Unesite komponentu zelene (G) [0.0 - 1.0]: ";
    std::cin >> g;
    c.set_green(g);

    std::cout << "Unesite komponentu plave (B) [0.0 - 1.0]: ";
    std::cin >> b;
    c.set_blue(b);

    std::cout << "Boja u heksadecimalnom formatu: " << vsite::oop::v2::to_hex(c.get_color_ref()) << std::endl;
}