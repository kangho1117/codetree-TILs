#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n,k;
    string T;
    cin>>n>>k>>T;
    vector<string> arr(n),afarr;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
        if(arr[i].find(T) == 0) afarr.push_back(arr[i]);
    sort(afarr.begin(), afarr.end());
    cout<<afarr[k-1];
    return 0;
}