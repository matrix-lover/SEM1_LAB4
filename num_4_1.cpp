#include <iostream>
#include <vector>
#include <random>
#include "lab04.hpp"

using namespace std;

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

int main()
{
    
    int size;
    cin >> size;
    vector<float> vec(size);
        
    for(int i = 0; i < size; ++i){cin >> vec[i];}
    
    sort(vec);
    
    foo(vec); // конечные значения
    return 0;
}
