#include <iostream>
#include <vector>
#include <random>


using namespace std;

void sort(vector<float>&vec);

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

int main() {
    vector<float> vec = generate_random_vector<float>(10, -100, 100);
    
    for(int i = 0; i < vec.size(); ++i) // начальные значения
    {
        cout << i + 1<< ": " << vec [i]<< endl;
    }
    cout << '\n' << '\n';
    
    sort(vec);
    
    for(int i = 0; i < vec.size(); ++i) // конечные значения
    {
        cout << i + 1<< ": " << vec [i]<< endl;
    }
    
    return 0;
}
