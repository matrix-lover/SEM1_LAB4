#include <iostream>
#include <vector>
#include <random>
#include "lab04.hpp"

using namespace std;

bool remove_first_negative_elements(vector<int>&vec, int& removed_element)
{
    int count = 0;
    int dig;
    for (int i = 0; i < vec.size(); ++i){
        if (vec[i] < 0){
            dig = i;
            count = 1;
            removed_element = vec[i];
            break;
        }
    }
    if (count == 1){
        for (int i = dig; i < vec.size()-1; i++){
            vec[i] = vec[i+1];
        }
        vec.pop_back();
        return true;
    }
    else return false;
}

int main()
{
    vector<int> vec = generate_random_vector<int>(10, -100, 100);
    int removed_element = 0;
    
    foo(vec); // начальные значения
        
    bool answer = remove_first_negative_elements(vec, removed_element);
    
    if (answer == true)
    {
        cout << "true" << '\n' << "removed element: " << removed_element << endl;
    }
    else cout << "false" << '\n' << "removed element: " << removed_element << endl;
    
    foo(vec); // конечные значения;
    
    return 0;
}
