#include <iostream>
#include <vector>
using namespace std;
int main() {
    int k,n,x=1,y=1,dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
    cin>>n;
    vector<vector<char>> vec(n+2, vector<char>(n+2,'x'));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>vec[i][j];
    cin>>k;
    int d=0,temp=1;
    while(temp<=4*n)
    {
        if(temp == k) break;
        if(vec[x][y + dy[d]] == 'x' || vec[x + dx[d]][y] == 'x')
        {
            d = (d+1)%4;
            temp++;
            continue;
        }
        x += dx[d];
        y += dy[d];
        temp++;
    }

    

    if(temp<n) d = 1;
    else if(temp<2*n) d=2;
    else if(temp<3*n) d=3;
    else d=0;

    int ting=0;
    while(1)
    {
        if(vec[x][y] == 'x') break;
        if(vec[x][y] == '\\')
        {
            ting++;
            if(d==0) d=1;
            else if(d==1) d = 0;
            else if(d==2) d = 3;
            else if(d==3) d = 2;
        }
        else if(vec[x][y] == '/')
        {
            ting++;
            if(d==0) d=3;
            else if(d==1) d = 2;
            else if(d==2) d = 1;
            else if(d==3) d = 0;
        }
        x += dx[d];
        y += dy[d];
    }
    cout<<ting;
    return 0;
}