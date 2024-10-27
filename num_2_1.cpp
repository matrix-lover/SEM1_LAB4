#include <iostream>
#include <vector>
#include "lab05.hpp"

using namespace std;

pair<float, float> minMax(const vector<float>&vec)
{
    pair<float, float> value (vec[0], vec[0]);
    for (int i = 1; i < vec.size(); ++i)
    {
        if (value.first > vec[i]) {value.first = vec[i];}
        else if (value.second < vec[i]) {value.second = vec[i];}
    }
    return value;
}

int main()
{
    int size;
    cin >> size;
    vector<float> vec(size);
    
    for(int i = 0; i < size; ++i){cin >> vec[i];}
    pair<float, float> value = minMax(vec);
    
    cout << "Min: " << value.first << '\n' << "Max: " << value.second << endl;
}
