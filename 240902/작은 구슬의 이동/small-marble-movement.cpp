#include <iostream>
using namespace std;
int main() {
    int n,t,r,c;
    char d;
    cin>>n>>t>>r>>c>>d;
    int arr[n][n]={0};
    for(int i=0;i<=t;i++)
    {
        if(r < 1)
        {
            d='D';
            r++;
            continue;
        }
        else if(n < r)
        {
            d='U';
            r--;
            continue;
        }
        else if(c < 1)
        {
            d='R';
            c++;
            continue;
        }
        else if(n < c)
        {
            d='L';
            c--;
            continue;
        }
        
        if(d=='U')
        {
            r--;
            continue;
        }
        else if(d=='D')
        {
            r++;
            continue;
        }
        else if(d=='R')
        {
            c++;
            continue;
        }
        else if(d=='L')
        {
            c--;
            continue;
        }
    }
    cout<<r<<" "<<c<<"\n";
    return 0;
}