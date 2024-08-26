#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> arr1(1,0), arr2(1,0);
    for(int i=0;i<n;i++)
    {
        int t, bt=1;
        char d;
        cin>>t>>d;
        while(t--)
        {
            if(d=='L')
            {
                arr1.push_back( arr1.back()- 1);
            }
            else if(d=='R')
            {
                arr1.push_back( arr1.back()+ 1);
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        int t, bt=1;;
        char d;
        cin>>t>>d;
        while(t--)
        {
            if(d=='L')
            {
                arr2.push_back( arr2.back()- 1);
            }
            else if(d=='R')
            {
                arr2.push_back( arr2.back()+ 1);
            }
        }
    }
    int cnt=0;
    // for(auto a : arr1)
    //     cout<<a<<" ";
    // cout<<"\n\n";
    // for(auto a : arr2)
    //     cout<<a<<" ";

    for(int i=1,j=1; i<arr1.size(), j<arr2.size();)
    {
        if(i<arr1.size()) i++;
        if(j<arr2.size()) j++;
        // cout<<i<<" "<<j<<"\n";
        if(arr1[i-1] != arr2[j-1] && arr1[i] == arr2[j])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}