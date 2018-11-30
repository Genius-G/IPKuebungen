#include <statistics.hh>
#include <io.hh>
#include <cmath>

double mean(const std::vector<double>& v){
    if (v.size != 0){
        double sum;
        for(double entry : v){
            sum += entry;
        }
        return (1/v.size) * sum;
    }
    else{
        std::cout << "Error! Cannot compute mean for empty vector." << std::endl;
        return 0;
    }
}

double median(const std::vector<double>& v){
    std::vector<double> v_copy;
    if (v.size != 0){
        if (v.size % 2 == 0){
            return (1/2) * (v_copy.at(v.size/2) + v_copy.at(v.size/2 + 1));
        }
        else{
            return v_copy.at((v.size + 1) /2);
        }
    }
    else{
        std::cout << "Error! Cannot compute median for empty vector." << std::endl;
        return 0;
    }
}

double moment(const std::vector<double>& v, int k){
    if (v.size != 0){
        double sum;
        for(double entry : v){
            sum += std::pow(entry, k);
        }
        return (1/v.size) * sum;
    }
    else{
        std::cout << "Error! Cannot compute moment for empty vector." << std::endl;
        return 0;
    }
}

double standard_deviation(const std::vector<double>& v){
    std::vector<double> v_copy;
    mean_of_v = mean(v);
    for(double entry : v_copy){
        v_copy.at(entry) = entry - mean_of_v;
    }
    return sqrt(moment(v_copy, 2))
}

std::vector<double> vector_minus_mean(const std::vector<double>& v){
    std::vector<double> v_copy;
    mean_of_v = mean(v);
    for(double entry : v_copy){
        v_copy.at(entry) = entry - mean_of_v;
    }
    return v_copy;
}

int main(){
    std::vector<double> v1;

    if (moment(vector_minus_mean(v1), 2) == moment(v1, 2) - std::pow(mean(v1), 2){
        std::cout << "made it!" << std::endl;
    }
    else{
        std::cout << "NO!!" << std::endl;
    }
}