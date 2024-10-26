#include <iostream>
#include <vector>
#include <random>

using namespace std;

pair<float, float> minMax(const vector<float>&vec);

template<class T>
vector<T> generate_random_vector(size_t num, T min = -100, T max = 100)
{
        random_device rd;
        mt19937 e2(rd());
        uniform_real_distribution<> dist(-100, 100);

        auto lambda = [&e2, &dist] () -> T { return dist(e2); };

        vector<T> result(10);
        generate_n(result.begin(), num, lambda);
        return result;
}

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

int main() {
    vector<float> vec = generate_random_vector<float>(10, -100, 100);
    
    for(int i = 0; i < vec.size(); ++i) // начальные значения
    {
        cout << i+1 << ": " << vec[i]<< endl;
    }
    cout << '\n' << '\n';
    
    pair<float, float> value = minMax(vec);
    
    cout << "Min: " << value.first << '\n' << "Max: " << value.second<< endl;
}
