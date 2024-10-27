#include <iostream>
#include <string>
#include <vector>

using namespace std;

string join(const vector<string>&arr, const string&sep)
{
    string str;
    for(int i = 0; i < arr.size(); ++i)
    {
        str = str + arr[i];
        if (i != arr.size()-1)
        {
            str = str + sep;
        }
    }
    return str;
}

int main()
{
    vector<string> arr = {"Can", "you", "could"};
    string sep = "  ";
    cout << '\n';
    
    string str = join(arr, sep);
    
    cout << str << endl;
}
