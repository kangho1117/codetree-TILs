#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n,m,cnt=0;
    cin>>n>>m;
    vector<vector<char>> vec(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        for(int j=0;j<m;j++)
        {
            vec[i][j] = str[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(vec[i][j]=='L')
            {
                //우
                if(j+2 < m && vec[i][j+1] =='E' && vec[i][j+2] == 'E') cnt++;
                //좌
                if(0 <= j-2 && vec[i][j-1] =='E' && vec[i][j-2] == 'E') cnt++;
                //상
                if(0 <= i-2 && vec[i-1][j] =='E' && vec[i-2][j] == 'E') cnt++;
                //하
                if(i+2 < n && vec[i+1][j] =='E' && vec[i+2][j] == 'E') cnt++;
                //우상
                if(0 <= i-2 && j+2 < m && vec[i-1][j+1] =='E' && vec[i-2][j+2] == 'E') cnt++;
                //우하
                if(i+2 < n && j+2 < m && vec[i+1][j+1] =='E' && vec[i+2][j+2] == 'E') cnt++;
                //좌상
                if(0 <= i-2 && 0 <= j-2 && vec[i-1][j-1] =='E' && vec[i-2][j-2] == 'E') cnt++;
                //좌하
                if(i+2 < n && 0 <= j-2 && vec[i+1][j-1] =='E' && vec[i+2][j-2] == 'E') cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}