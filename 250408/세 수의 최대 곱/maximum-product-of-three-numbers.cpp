#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0,temp; i < n; i++) 
    {
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    int a = arr[0]*arr[1]*arr.back();
    int b = arr[arr.size()-1] * arr[arr.size()-2] * arr[arr.size()-3];
    if(a>b) cout<<a;
    else cout<<b;
    return 0;
}