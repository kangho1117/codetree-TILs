#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=1;i<=n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
        if(i%2 != 0)
        {
            sort(vec.begin(), vec.end());
            cout<<vec[vec.size()/2]<<" ";
        }
    }
    return 0;
}