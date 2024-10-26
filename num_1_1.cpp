#include <iostream>
#include <vector>
#include "lab04.hpp"

using namespace std;

float mean(const vector<float>&vec)
{
    float sum = 0;
    for (int i = 0; i < vec.size(); ++i)
    {
        sum += vec[i];
    }
    return sum/float(vec.size());
}


int main()
{
    int size;
    cin >> size;
    vector<float> vec(size);
    
    for(int i = 0; i < size; ++i) {cin >> vec[i];}
    
    cout << mean(vec) << endl;
    return 0;
}
