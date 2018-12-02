#include <map>
#include <iostream>

//task(a)
std::map<char,int> get_frequencies(){
    std::map<char,int> map;

    while(true){
        unsigned char c;
        std::cin >> c;
        if (not std::cin) break;
        map[c] += 1;
    }
    return map;
}

//task(b)
void print_frequencies(const std::map<char, int>& frequencies){
    for(double entry: frequencies){
        std::cout << frequencies.first() << " ";
        std::cout << frequencies.second() << endl;
    }
}


