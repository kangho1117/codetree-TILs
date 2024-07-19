#include <iostream>
#include <vector>
using namespace std;
bool check(vector<vector<int>> &vec, int x1, int x2, int y1, int y2)
{
    for(int i = x1; i <= x2; i++)
    {
        for(int j = y1; j <= y2; j++)
        {
            if(vec[i][j]==0) return false;
        }
    }
    return true;
}
int count(int x1,int x2,int y1,int y2)
{
    int cnt=0;
    for(int i = x1; i <= x2; i++)
    {
        for(int j = y1; j <= y2; j++)
        {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n, m,temp,max=0;
    cin>>n>>m;
    vector<vector<int>> vec(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>temp;
            if(temp>0) vec[i][j] = 1;
            else vec[i][j] = 0;
        }
    }

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j <=m; j++)
        {
            for(int x = i; x<=n; x++)
            {
                for(int y = j; y <=m; y++)
                {
                    if(check(vec, i, x, j, y))
                    {
                        int temp = count(i, x, j, y);
                        if(max < temp) max = temp;
                    }
                }
            }
        }
    }
    if(max == 0) cout<<-1;
    else cout<<max;
    return 0;
}