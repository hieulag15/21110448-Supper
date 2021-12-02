#include<bits/stdc++.h>

using namespace std;


int main()
{
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string hi;
    while (ss >> hi)
        v.push_back(hi);
    reverse(v.begin(), v.end());
    for (auto i : v)   
        cout << i << " ";
    return 0;
}
