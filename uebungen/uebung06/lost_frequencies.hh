#include <map>
#include <iostream>

//task(a)
std::map<char,int> get_frequencies(){
    std::map<char,int> map;

    while(true){
        unsigned char c;
        std::cin >> c;
        if (not std::cin)
            break;
        if (not std::isalpha(c))
            continue;
        map[std::toupper(c)] += 1;
    }
    return map;
}

//task(b)
void print_frequencies(const std::map<char, int>& frequencies){
    double sum = 0;
    for(std::pair<char, int> entry: frequencies){
        sum += entry.second;
    }
    for(std::pair<char, int> entry: frequencies){
        std::cout << entry.first << " ";
        std::cout << static_cast<double>(entry.second) / sum << std::endl;
    }
    std::cout << "The total number of Letters is " << sum << std::endl;
}

