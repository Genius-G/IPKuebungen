#include "statistics.hh"
#include "io.hh"
#include <cmath>
#include <iostream>

double mean(const std::vector<double>& v){
    if (v.size() != 0){
        double sum = 0;
        for(double entry : v){
            sum += entry;
        }
        return (1.0/v.size()) * sum;
    }
    else{
        std::cout << "Error! Cannot compute mean for empty vector." << std::endl;
        return 0;
    }
}

double median(const std::vector<double>& v){
    std::vector<double> v_copy;
    if (v.size() != 0){
        if (v.size() % 2 == 0){
            return (1/2) * (v_copy.at(v.size()/2) + v_copy.at(v.size()/2 + 1));
        }
        else{
            return v_copy.at((v.size() + 1) /2);
        }
    }
    else{
        std::cout << "Error! Cannot compute median for empty vector." << std::endl;
        return 0;
    }
}

double moment(const std::vector<double>& v, int k){
    if (v.size() != 0){
        double sum = 0;
        for(double entry : v){
            sum += std::pow(entry, k);
        }
        return (1.0/v.size()) * sum;
    }
    else{
        std::cout << "Error! Cannot compute moment for empty vector." << std::endl;
        return 0;
    }
}

std::vector<double> vector_minus_mean(const std::vector<double>& v){
    std::vector<double> v_copy = v;
    double mean_of_v = mean(v);
    for(int i = 0; i < v_copy.size(); i++){
        v_copy.at(i) = v_copy.at(i) - mean_of_v;
        //std::cout << v_copy.at(i) << std::endl;
    }
    return v_copy;
}

double standard_deviation(const std::vector<double>& v){
    return sqrt(moment(vector_minus_mean(v), 2));
}



int main(){
    std::vector<double> v1 = {{2, 2, 423, 444.32}};
    std::cout << moment(vector_minus_mean(v1), 2) << std::endl;
    std::cout << moment(v1, 2) - std::pow(mean(v1), 2) << std::endl;
    }
}
