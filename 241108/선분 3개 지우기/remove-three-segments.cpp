#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,maxnum=0;
    cin>>n;
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec[i] = {x,y};
    }
    sort(vec.begin(), vec.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                bool find = true;
                int arr[101]={0,};
                for(int w=0;w<n;w++)
                {
                    if(w==i || w==j || w==k) continue;
                    for(int z=vec[w].first;z<=vec[w].second;z++)
                        arr[z]++;
                }
                for(int z=0;z<=100;z++)
                    if(arr[z]>1) find = false;
                if(find) maxnum++;
            }
        }
    }
    cout<<maxnum;
    return 0;
}