#include "io.hh"
#include "statistics.hh"
#include <iostream>

std::vector<double> read_vector(){
    std::vector<double> res;
    double c;
    int i = 0;
    while(true){
        std::cin >> c;
        if(not std::cin)
            break;
        res[i] = c;
        i++;
    }
    return res;
}

int main(){
    std::vector<double> v = read_vector();
    for(double entry : v){
        std::cout << entry << std::endl;
    }

}

