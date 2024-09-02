#include <iostream>
using namespace std;
int main() {
    int n,t,r,c;
    char d;
    cin>>n>>t>>r>>c>>d;
    int arr[n][n]={0};
    for(int i=1;i<=t;i++)
    {
        if(d=='U')
        {
            r--;
        }
        else if(d=='D')
        {
            r++;

        }
        else if(d=='R')
        {
            c++;
            
        }
        else if(d=='L')
        {
            c--;
        }
        
        if(r < 1)
        {
            d='D';
            r=1;
        }
        else if(n < r)
        {
            d='U';
            r=n;
        }
        else if(c < 1)
        {
            d='R';
            c=1;
        }
        else if(n < c)
        {
            d='L';
            c=n;
        }
    }
    cout<<r<<" "<<c<<"\n";
    return 0;
}