#include <vector>
#include <iostream>

void task_a(std::vector<double> v){
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }
}

int main(int argc, char** argv){
    std::vector<double> v1;
    std::vector<double> v2(10);
    std::vector<double>  v3 {{ 3, 8, 7, 5, 9, 2 }};

    //task (a):
    task_a(v1); //doesn't return any value
    task_a(v2); //returns 10 zeros
    task_a(v3); //returns the values of v1

    //task (b):
}
