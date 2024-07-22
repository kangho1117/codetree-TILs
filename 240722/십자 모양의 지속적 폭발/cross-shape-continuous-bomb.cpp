#include <iostream>
#include <vector>
using namespace std;
void printvec(vector<vector<int>> &vec, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}
vector<vector<int>>& bomb(vector<vector<int>> &vec, int c, int n)
{
    for(int i=0; i<n; i++)
    {
        if(vec[i][c] != 0)
        {
            int num = vec[i][c];
            for(int z=0;z<num;z++)
            {
                if(0 <= i-z  && vec[i-z][c] != 0) vec[i-z][c] = 0;
                if(i+z < n && vec[i+z][c] != 0) vec[i+z][c] = 0;
                if(0 <= c-z && vec[i][c-z] != 0) vec[i][c-z] = 0;
                if(c+z < n && vec[i][c+z] != 0) vec[i][c+z] = 0;
            }
            break;
        }
    }
    return vec;
}

vector<vector<int>>& gravity(vector<vector<int>> &vec, int n)
{
    vector<vector<int>> nvec(n, vector<int>());
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(vec[j][i] == 0) nvec[i].push_back(vec[j][i]);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(vec[j][i] != 0) nvec[i].push_back(vec[j][i]);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            vec[j][i] = nvec[i][j];
    return vec;
}
int main() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> vec(n, vector<int>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>vec[i][j];
    for(int z=0;z<m;z++)
    {
        int c;
        cin>>c;
        vec = gravity(bomb(vec, c-1, n), n);
    }
    printvec(vec, n);
    return 0;
}