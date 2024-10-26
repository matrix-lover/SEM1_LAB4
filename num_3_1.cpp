#include <iostream>
#include <vector>

using namespace std;

float argMax(const vector<float>&vec);

template< class T > class numeric_limits;


float argMax(const vector<float>&vec)
{
    float max = 0;
    max = vec[0];
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] > max) {max = i;}
    }
    return max;
}

int main()
{
    
    int size;
    cin >> size;
    vector<float> vec(size);
        
    for(int i = 0; i < size; ++i){cin >> vec[i];}
    if (size > 0)
    {
        cout << argMax(vec) << endl;
    }
    else {cout << -1 << endl;}
    return 0;
}
