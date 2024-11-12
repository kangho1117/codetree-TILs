#include <iostream>
#include <string>
using namespace std;
int main() {
    string x,y;
    cin>>x>>y;
    int sx=0,sy=0;
    for(int i=0;i<x.size();i++)
        sx += x[i]-48;
    for(int i=0;i<y.size();i++)
        sy += y[i]-48;
    if(sx < sy) cout<<sy;
    else cout<<sx;
    return 0;
}