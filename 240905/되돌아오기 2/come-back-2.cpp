#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int x=0,y=0,d=3,t=0, dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'F')
        {
            x += dx[d];
            y += dy[d];
        }
        else if(s[i] == 'L')
            d = (d+1)%4;
        else if(s[i] == 'R')
            d = (d-1+4)%4;
        t++;
        if(x==0 && y==0) {cout<<t; return 0;}
    }
    cout<<-1;
    return 0;
}