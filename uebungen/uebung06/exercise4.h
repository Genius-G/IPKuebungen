#ifndef EXERCISE4_H
#define EXERCISE4_H

#include <unordered_map>
#include <iostream>
#include <string>

//task(a) of exercise 4
std::unordered_map<std::string,int> get_frequencies(){
    std::unordered_map<std::string,int> map;

    while(true){
        std::string c;
        std::cin >> c;
        if (not std::cin)
            break;
        map[c] += 1;
    }
    return map;
}

//task(b) of exercise 4
void print_frequencies(const std::unordered_map<std::string,int>& frequencies){
    double sum = 0;
    for(std::pair<std::string, int> entry: frequencies){
        sum += entry.second;
    }
    for(std::pair<std::string, int> entry: frequencies){
        std::cout << entry.first << " ";
        std::cout << static_cast<double>(entry.second) / sum << std::endl;
    }
    std::cout << "The total number of Words is " << sum << std::endl;
}

#endif // EXERCISE4_H
