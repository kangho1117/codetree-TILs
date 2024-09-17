#include <iostream>
#include <vector>
using namespace std;
int main() {
    int r,c,x=1,y=1,cnt=0;
    cin>>r>>c;
    vector<vector<char>> vec(r+1,vector<char>(c+1,'x'));
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            cin>>vec[i][j];

    for(int i=2;i<=r;i++)
    {
        for(int j=2;j<=c;j++)
        {
            for(int k=i+1;k<r;k++)
            {
                for(int l=j+1;l<c;l++)
                {
                    if(vec[1][1] != vec[i][j] &&
                    vec[i][j] != vec[k][l] &&
                    vec[k][l] != vec[r][c]) cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}