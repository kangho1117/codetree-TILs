#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> gravity(vector<vector<int>> &vec, int n)
{
    vector<vector<int>> temp_2d(n+1, vector<int>(n+1,0));
    for(int j=1;j<=n;j++)
    {
        vector<int> temp(1,0);
        for(int i = 1; i <= n; i++)
        {
            if(vec[i][j] != 0)
            {
                temp.push_back(vec[i][j]);
            }
        }
        while(temp.size() < n+1)
            temp.insert(temp.begin(),0);
        for(int i = 1; i <= n; i++)
        {
            temp_2d[i][j] = temp[i];
        }
    }
    return temp_2d;
}
int main() {
    int n, r, c;
    cin>>n;
    vector<vector<int>> vec(n+2,vector<int>(n+2,-1));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>vec[i][j];
    cin>>r>>c;
    int boom = vec[r][c];
    for(int i=0;i<boom;i++)
    {
        if(0 < r+i && r+i <= n && vec[r+i][c] != -1) vec[r+i][c] = 0;
        if(0 < r-i && r-i <= n && vec[r-i][c] != -1) vec[r-i][c] = 0;
        if(0 < c+i && c+i <= n &&vec[r][c+i] != -1) vec[r][c+i] = 0;
        if(0 < c-i && c-i <= n &&vec[r][c-i] != -1) vec[r][c-i] = 0;
    }

    vec = gravity(vec, n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}