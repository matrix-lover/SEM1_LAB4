#include <iostream>
#include <vector>
#include <random>
#include "lab04.hpp"

using namespace std;

float mean(const vector<float>&vec);

float mean(const vector<float>&vec)
{
    float sum = 0;
    for (int i = 0; i < vec.size(); ++i)
    {
        sum += vec[i];
    }
    return sum/float(vec.size());
}

int main() {
    vector<float> vec = generate_random_vector<float>(20, -100, 100);
    
    foo(vec); // начальные значения
    cout << mean(vec) << endl;
    return 0;
}
