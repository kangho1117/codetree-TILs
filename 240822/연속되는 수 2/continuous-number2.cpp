#include <iostream>
using namespace std;

int main() {
    int n,max=0,bef=-1;
    cin>>n;
    for(int i=0,now=0;i<n;i++)
    {
        int inf;
        cin>>inf;
        now++;
        if(inf != bef)
        {
            if(now > max) max = now;
            now = 0;
        }
        bef = inf;
    }
    cout<<max;
    return 0;
}