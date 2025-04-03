#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;
vector<vector<char>> v(12,vector<char>(12,'!'));
int main() {
    int sx,sy,sum=0;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            cin>>v[i][j];
            if(v[i][j] == 'B')
            {
                sx = i;
                sy = j;
            }
        }
    }
    queue<tuple<int,int,int>> q;
    q.push({sx,sy,0});
    while(!q.empty())
    {
        int nowx = get<0>(q.front()), nowy = get<1>(q.front()), sum = get<2>(q.front());
        q.pop();
        if(v[nowx][nowy] == 'L')
        {
            cout<<sum-1;
            break;
        }
        else if(v[nowx][nowy] == '!' || v[nowx][nowy] == 'R') continue;
        else
        {
            v[nowx][nowy] = '.';
            q.push({nowx+1,nowy,sum+1});
            q.push({nowx-1,nowy,sum+1});
            q.push({nowx,nowy+1,sum+1});
            q.push({nowx,nowy-1,sum+1});
        }
    }
    return 0;
}