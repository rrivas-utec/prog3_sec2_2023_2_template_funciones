#include <iostream>
#include "funciones_template.h"

int main() {
    print(1, 10.5, "Hola", true);
    std::cout << std::endl;
    print2(1, 10.5, "Hola", true);
    std::cout << std::endl;
    print3(1, 10.5, "Hola", true);

    cout << sumar(1, 2, 3) << endl;
    cout << multiplicar<double>(1, 2, 3) << endl;
    cout << multiplicar(1, 2, 3) << endl;

    return 0;
}
