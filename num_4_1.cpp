#include <iostream>
#include <vector>
#include <random>


using namespace std;

void sort(vector<float>&vec);


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
    
    for(int i = 0; i < vec.size(); ++i) // конечные значения
    {
        cout << i + 1 << ": " << vec [i]<< endl;
    }
    
    return 0;
}
