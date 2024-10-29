#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,ans=0;
    cin>>n;
    pair<int,int> arr[n];
    for(int i=0,x,y;i<n;i++)
    {
        cin>>x>>y;
        arr[i] = {x,y};
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            for(int k=0;k<n;k++)
            {
                if(j==k) continue;
                int x1 = arr[i].first, y1 = arr[i].second,
                    x2 = arr[j].first, y2 = arr[j].second, 
                    x3 = arr[k].first, y3 = arr[k].second;
                if(x1 == x2)
                {
                    if(y1==y3){
                        int temp = abs(y2-y1) * abs(x3-x1);
                        ans = max(ans,temp);
                    }
                    if(y2==y3){
                        int temp = abs(y2-y1) * abs(x2-x3);
                        ans = max(ans,temp);
                    }
                }
                if(x1 == x3)
                {
                    if(y1==y2){
                        int temp = abs(y3-y1) * abs(x2-x1);
                        ans = max(ans,temp);
                    }
                    if(y2==y3){
                        int temp = abs(y3-y1) * abs(x2-x3);
                        ans = max(ans,temp);
                    }
                }
                if(x2 == x3)
                {
                    if(y1==y2){
                        int temp = abs(y3-y2) * abs(x2-x1);
                        ans = max(ans,temp);
                    }
                    if(y1==y3){
                        int temp = abs(y3-y2) * abs(x1-x3);
                        ans = max(ans,temp);
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}