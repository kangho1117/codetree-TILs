#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<int> vec;
    cin>>n;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    while(n != 1)
    {
        vec.push_back(n%2);
        n /= 2;
    }
    vec.push_back(n);
    while(!vec.empty())
    {
        cout<<vec.back();
        vec.pop_back();
    }
    return 0;
}