#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n,a,b,c,cnt=0;
    cin>>n>>a>>b>>c;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=n;k++)
                if(abs(a-i) <=2 || abs(b-j) <=2 || abs(c-k) <=2) cnt++;
    cout<<cnt;
    return 0;
}