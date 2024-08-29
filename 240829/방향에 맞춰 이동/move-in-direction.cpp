#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int dx[4]={1,0,-1,0}, dy[4]={0,-1,0,1};
    int x=0,y=0;
    for(int i=0,h;i<n;i++)
    {
        char d;
        cin>>d>>h;
        if(d == 'N') x += dx[0]*h;
        else if(d == 'W') y += dy[1]*h;
        else if(d == 'S') x += dx[2]*h;
        else if(d == 'E') y += dy[3]*h;
    }
    cout<<y<<" "<<x;
    return 0;
}