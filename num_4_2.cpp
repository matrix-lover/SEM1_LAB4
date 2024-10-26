#include <iostream>
#include <vector>
#include <random>
#include "lab04.hpp"


using namespace std;

void sort(vector<float>&vec);

void sort(vector<float>&vec){
    float cur;
    for (int i = 0; i < vec.size(); ++i)
    {
        for (int j = i + 1; j < vec.size(); ++j)
        {
            if (vec[j] > vec [i])
            {
                cur = vec[j];
                vec[j] = vec[i];
                vec[i] = cur;
            }
        }
    }
}

int main() {
    vector<float> vec = generate_random_vector<float>(10, -100, 100);
    
    foo(vec); // начальные значания
    
    sort(vec);
    
    foo(vec); // конечные значания
    
    return 0;
}

