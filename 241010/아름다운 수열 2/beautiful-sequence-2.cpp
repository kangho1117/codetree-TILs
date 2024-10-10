#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n,m,cnt=0;
    cin>>n>>m;
    vector<int> arr1(n),arr2(m);
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int j=0;j<m;j++)
        cin>>arr2[j];
    sort(arr2.begin(), arr2.end());
    for(int i=0;i<=n-m;i++)
    {
        vector<int> temp;
        for(int j=0;j<m;j++)
            temp.push_back(arr1[i+j]);
        sort(temp.begin(), temp.end());
        bool iscorrect = true;
        for(int j=0;j<m;j++)
        {
            if(arr2[j] != temp[j])
            {
                iscorrect = false;
                break;
            }
        }
        if(iscorrect) cnt++;
    }
    cout<<cnt;
    return 0;
}