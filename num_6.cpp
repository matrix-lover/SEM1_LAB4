#include <string>
#include <iostream>

using namespace std;
string replace(string&str, string&old, string&new_string)
{
    int simb = 0;
    while(old[simb] != 0)
    {
        simb += 1;
    }
    while(str.find(old) != string::npos){
        unsigned long start = str.find(old);
        str.erase(start, simb);
        str.insert(start, new_string);
    }
    return str;
}

int main() {
    string str;
    string old;
    string new_string;
    getline(cin, str);
    cin >> old;
    cin >> new_string;
    cout << '\n';
    
    replace(str, old, new_string);
    
    cout << str << endl;
    return 0;
}

