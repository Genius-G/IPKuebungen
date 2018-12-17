#ifndef SWAP_HH
#define SWAP_HH

#include <iostream>

template <typename T>
void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

#endif //SWAP_HH
