#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    vector<int> vec;
    cin>>n;
    while(n != 1)
    {
        vec.push_back(n%2);
        n /= 2;
    }
    vec.push_back(n);
    reverse(vec.begin(), vec.end());
    for(auto &a : vec)
        cout<<a;
    return 0;
}