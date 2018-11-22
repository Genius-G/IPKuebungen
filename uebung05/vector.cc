#include <vector>
#include <iostream>
#include <cmath>

//task(a)
void give_entries(std::vector<double> v){
    std::cout << "Entries are: ";
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;
}

//task(b)
std::pair<double, double> min_max(std::vector<double> v){
    double min = v[0];
    double max = v[0];

    //find min
    for(int i = 0; i < v.size(); i++){
        if(v[i] < min){
            min = v[i];
        }
    }
    //find max
    for(int i = 0; i < v.size(); i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    std::pair<double, double> result;
    result.first = min;
    result.second = max;
    return result;
}

//task(c)
std::vector<double> reversed(std::vector<double> v){
    std::vector<double> result(v.size());
    for(int i = 0; i < v.size(); i++){
        result[i] = v[v.size() - i];
    }
    return result;
}

//task(d)
std::vector<double> round(std::vector<double> v){
    for(int i = 0; i < v.size(); i++){
        v[i] = std::round(v[i]);
    }
    return v;
}

int main(){
    std::vector<double> v1;
    std::vector<double> v2(10);
    std::vector<double>  v3 {{ 3, 8, 7, 5, 9, 2 }};
    std::vector<double>  v4 {{ 3.354, 8.4325, 7.585, 5.644, 9.000, 2.46 }};

    //task (a):
    give_entries(v1); //doesn't return any value
    give_entries(v2); //returns 10 zeros
    give_entries(v3); //returns the values of v1
    give_entries(v4); //returns the values of v4
    std::cout << std::endl;

    //task (b):
    std::cout << "The minimum of v3 is " << min_max(v3).first;
    std::cout << " and the maximum of v3 is " << min_max(v3).second << std::endl;
    std::cout << "The minimum of v2 is " << min_max(v2).first;
    std::cout << " and the maximum of v2 is " << min_max(v2).second << std::endl;
    std::cout << std::endl;

    //task (c):
    give_entries(reversed(v3));
    give_entries(reversed(v2));
    std::cout << std::endl;

    //task (d):
    give_entries(round(v3));
    give_entries(round(v4));
    std::cout << std::endl;

}
