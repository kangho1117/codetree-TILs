#include <iostream>
#include <string>
using namespace std;
int main() {
    int x = 0 , y= 0 , d = 3;
    string s;
    cin>>s;
    int dx[4] = {1,0,-1,0}, dy[4] = {0,-1,0,1};
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'R') d = (d + 1) % 4;
        else if(s[i] == 'L') d = (d - 1 + 4) % 4;
        else if(s[i] == 'F')
        {
            x += dx[d];
            y += dy[d];
        }
    }
    cout<<x<<" "<<y;
    return 0;
}