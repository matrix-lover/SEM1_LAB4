#include <iostream>
#include <random>
#include <vector>
using namespace std;


template<class T1>
void foo(const vector<T1>&vec)
{
    for(int i = 0; i < vec.size(); ++i) // начальные или конечные значения
    {
        cout << i+1 << ": " << vec[i]<< endl;
    }
    cout << '\n';
}

template<class T2>
vector<T2> generate_random_vector(size_t num, T2 min = -100, T2 max = 100)
{
        random_device rd;
        mt19937 e2(rd());
        uniform_real_distribution<> dist(-100, 100);

        auto lambda = [&e2, &dist] () -> T2 { return dist(e2); };

        vector<T2> result(10);
        generate_n(result.begin(), num, lambda);
        return result;
}

float mean(const vector<float>&vec);
pair<float, float> minMax(const vector<float>&vec);
float argMax(const vector<float>&vec);
void sort(vector<float>&vec);
bool remove_first_negative_elements(vector<int>&vec, int& removed_element);
string replace(string&str, string&old, string&new_string);
vector<string> split(string&str, string&sep);
string join(const vector<string>&arr, const string&sep)
