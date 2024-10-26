#include <iostream>
#include <vector>
#include <random>

using namespace std;

float mean(const vector<float>&vec);

template<class T>
vector<T> generate_random_vector(size_t num, T min = -100, T max = 100)
{
        random_device rd;
        mt19937 e2(rd());
        uniform_real_distribution<> dist(-100, 100);

        auto lambda = [&e2, &dist] () -> T { return dist(e2); };

        vector<T> result(20);
        generate_n(result.begin(), num, lambda);
        return result;
}

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
    
    cout << mean(vec) << endl;
    return 0;
}
