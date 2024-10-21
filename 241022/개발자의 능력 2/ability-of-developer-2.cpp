#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> arr(6), vec(3);
    for(int i=0;i<6;i++)
        cin>>arr[i];
    sort(arr.begin(), arr.end());
    for(int i=0,j=5;i<=2,j>=3;i++,j--)
        vec[i] = arr[i]+arr[j];
    sort(vec.begin(), vec.end());
    cout<<vec.back()-vec.front();
    return 0;
}