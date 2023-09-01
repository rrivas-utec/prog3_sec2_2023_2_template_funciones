//
// Created by rrivas on 28/08/2023.
//

#ifndef PROG3_SEC2_2023_2_TEMPLATE_FUNCIONES_FUNCIONES_TEMPLATE_H
#define PROG3_SEC2_2023_2_TEMPLATE_FUNCIONES_FUNCIONES_TEMPLATE_H

#include <iostream>
#include <tuple>
using namespace std;

void print() {}

template<typename T, typename ...Package>
void print(T first, Package... params) {
//    std::cout << __PRETTY_FUNCTION__ << std::endl;
    cout << first << " ";
    print(params...);
}


template<typename T, typename ...Package>
void print2(T first, Package... params) {
    cout << first << " ";
    auto t = tuple<Package...>(params...);
    if constexpr (sizeof...(params) != 0) {
        cout << std::get<0>(t) << " ";
        print2(params...);
    }
}

template<typename ...Package>
void print3(Package... params) {
    ((cout << params << " "), ...);
}

template<typename ...Package>
auto sumar(Package... params) {
    return (params + ...);
}

template<typename T = int, typename ...Package>
T multiplicar(Package... params) {
    return (params * ...);
}





#endif //PROG3_SEC2_2023_2_TEMPLATE_FUNCIONES_FUNCIONES_TEMPLATE_H
