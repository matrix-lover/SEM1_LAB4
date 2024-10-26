#include <iostream>
#include <vector>

using namespace std;

float argMax(const vector<float>&vec);

template< class T > class numeric_limits;


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

int main()
{
    
    int size;
    cin >> size;
    vector<int> vec(size);
        
    for(int i = 0; i < size; ++i){cin >> vec[i];}
    if (vec.size() > 0)
    {
        cout << "Индекс максимального: " << argMax(vec)+1 << endl;
    }
    else {cout << -1 << endl;}
    return 0;
}
