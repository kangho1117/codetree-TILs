#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i][0] = a;
        arr[i][1] = b;
    }
    for(int i=1,ans;i<=10000;i++)
    {
        ans = i;
        bool success = false; 
        for(int j=0;j<n;j++)
        {
            int a,b;
            a = arr[j][0];
            b = arr[j][1];
            ans *=2;
            if(a <= ans && ans <=b) success = true;
            else   
            {
                success = false;
                break;
            }
        }
        if(success) {cout<<i;break;}

    }
    return 0;
}