#include <iostream>
#include <vector>
#include <random>

using namespace std;

float argMax(const vector<float>&vec);

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

int main() {
    vector<float> vec = generate_random_vector<float>(10, -100, 100);

    for(int i = 0; i < vec.size(); ++i) // начальные значения
    {
        cout << i+1 << ": " << vec[i]<< endl;
    }
    cout << '\n';
    
    if (vec.size() > 0)
    {
        cout << argMax(vec) << endl;
    }
    else {cout << -1 << endl;}
    return 0;
}
