#include <iostream>
using namespace std;
int main() {
    int n,arr[3000001][2]={0,};
    cin>>n;
    int ans = n, check[n+1]={0,};
    for(int i=1,x1,x2;i<=n;i++)
    {
        cin>>x1>>x2;
        arr[x1+1000000][0] = i;
        arr[x2+1000000][1] = i;
    }
    check[0] = 1;
    for(int i=0,mem=0;i<=3000000;i++)
    {
        int x1 = arr[i][0];
        if(check[x1] == 0 && x1>0)
        {
            bool cross = false;
            check[x1] = 1;
            for(int j=mem;j<=3000000;j++)
            {
                int x2 = arr[j][1];
                if(x2 == x1) 
                {
                    if(!cross) mem = j;
                    break;
                }
                if(x2 != 0 && x2 != x1 && check[x2] == 0)
                {
                    cross = true;
                    ans--;
                    check[x2] = 1;
                    //cout<<x1<<" "<<x2<<"!!";
                }
            }
            if(cross) ans--;
    
            //cout<<"\n";
        }
    }
    // for(int i=999990;i<=1000010;i++)
    //     cout<<arr[i][0]<<" "<<arr[i][1]<<"\n";
    // cout<<"\n";
    cout<<ans;
    return 0;
}