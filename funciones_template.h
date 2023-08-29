//
// Created by rrivas on 28/08/2023.
//

#ifndef PROG3_SEC2_2023_2_TEMPLATE_FUNCIONES_FUNCIONES_TEMPLATE_H
#define PROG3_SEC2_2023_2_TEMPLATE_FUNCIONES_FUNCIONES_TEMPLATE_H

#include <iostream>
using namespace std;

template<typename T>
void print(T first) {
    cout << first;
}

template<typename T, typename ...Package>
void print(T first, Package... params) {
//    std::cout << __PRETTY_FUNCTION__ << std::endl;
    cout << first << " ";
    print(params...);
}



#endif //PROG3_SEC2_2023_2_TEMPLATE_FUNCIONES_FUNCIONES_TEMPLATE_H
