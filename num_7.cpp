#include <string>
#include <iostream>
#include <vector>

using namespace std;
vector<string> split(string&str, string&sep)
{
    
    vector<string> arr;
    while(str.find(sep) != string::npos){
        unsigned long start = str.find(sep);
        arr.push_back(str.substr(0, start));
        str.erase(0, start+1);
    }
    arr.push_back(str);
    return arr ;
}

int main() {
    string str;
    string sep;
    getline(cin, str);
    getline(cin, sep);
    vector<string> arr;
    cout << '\n';
    
    arr = split(str, sep);

    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
    return 0;
}
