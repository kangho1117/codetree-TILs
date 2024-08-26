#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> arr1(1,0), arr2(1,0);
    for(int i=0,t;i<n;i++)
    {
        char d;
        cin>>t>>d;
        while(t--)
        {
            if(d=='L')
                arr1.push_back( arr1.back()- 1);
            else if(d=='R')
                arr1.push_back( arr1.back()+ 1);
        }
    }
    for(int i=0,t;i<m;i++)
    {
        char d;
        cin>>t>>d;
        while(t--)
        {
            if(d=='L')
                arr2.push_back( arr2.back()- 1);
            else if(d=='R')
                arr2.push_back( arr2.back()+ 1);
        }
    }
    int cnt=0;
    while(arr1.size() != arr2.size())
    {
        if(arr1.size() < arr2.size())
            arr1.push_back(arr1.back());
        else if(arr1.size() > arr2.size())
            arr2.push_back(arr2.back());
    }

    for(int i=1; i<arr1.size()-1; i++)
    {
        if(arr1[i-1] != arr2[i-1] && arr1[i] == arr2[i])
            cnt++;
    }
    cout<<cnt;
    return 0;
}