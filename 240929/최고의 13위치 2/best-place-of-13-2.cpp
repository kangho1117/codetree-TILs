#include <iostream>
#include <vector>
using namespace std;
int n,nam=2;
int s1(vector<vector<int>> &vec)
{
int cnt=0;
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            if(nam==0) return cnt;
            if(vec[i][j]==1&&vec[i][j+1]==1&&vec[i][j+2]==1)
                {
                    cnt+=3;
                    vec[i][j]=0;
                    vec[i][j+1]=0;
                    vec[i][j+2]=0;
                    nam--;
                }  
            if(nam==0) return cnt;
        }
    }
    return cnt;
}

int s2(vector<vector<int>> &vec)
{
int cnt=0;
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            if(nam==0) return cnt;
            if(vec[i][j]==1&&vec[i][j+1]==1)
                {
                    cnt+=2;
                    vec[i][j]=0;
                    vec[i][j+1]=0;
                    vec[i][j+2]=0;
                    nam--;
                } 
            else if(vec[i][j]==1&&vec[i][j+2]==1)
                {
                    cnt+=2;
                    vec[i][j]=0;
                    vec[i][j+1]=0;
                    vec[i][j+2]=0;
                    nam--;
                }  
            else if(vec[i][j+1]==1&&vec[i][j+2]==1)
                {
                    cnt+=2;
                    vec[i][j]=0;
                    vec[i][j+1]=0;
                    vec[i][j+2]=0;
                    nam--;
                }   
            if(nam==0) return cnt;
        }
    }
    return cnt;
}

int s3(vector<vector<int>> &vec)
{
int cnt=0;
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            if(nam==0) return cnt;
            if(vec[i][j]==1)
                {
                    cnt+=1;
                    vec[i][j]=0;
                    vec[i][j+1]=0;
                    vec[i][j+2]=0;
                    nam--;
                } 
            else if(vec[i][j+1]==1)
                {
                    cnt+=1;
                    vec[i][j]=0;
                    vec[i][j+1]=0;
                    vec[i][j+2]=0;
                    nam--;
                }  
            else if(vec[i][j+2]==1)
                {
                    cnt+=1;
                    vec[i][j]=0;
                    vec[i][j+1]=0;
                    vec[i][j+2]=0;
                    nam--;
                }   
            if(nam==0) return cnt;
        }
    }
    return cnt;
}
int main() {
    cin>>n;
    vector<vector<int>> vec(n, vector<int>(n));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>vec[i][j];
    cout<<s1(vec)+s2(vec)+s3(vec);
    return 0;
}