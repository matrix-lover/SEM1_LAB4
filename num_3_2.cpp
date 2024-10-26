#include <iostream>
#include <vector>
#include <random>
#include "lab04.hpp"

using namespace std;

float argMax(const vector<float>&vec);

int argMax(const vector<int>&vec)
{
    int max = 0;
    int max_index = 0;
    max = vec[0];
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] > max)
        {
            max = vec[i];
            max_index = i;
        }
    }
    return max_index;
}

int main() {
    vector<int> vec = generate_random_vector<int>(10, -100, 100);

    foo(vec);
    cout << '\n';
    
    if (vec.size() > 0)
    {
        cout << "Индекс максимального: " << argMax(vec)+1 << endl;
    }
    else {cout << -1 << endl;}
    
    return 0;
}

