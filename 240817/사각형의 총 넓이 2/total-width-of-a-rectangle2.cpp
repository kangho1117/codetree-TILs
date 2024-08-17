#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool arr[201][201] = {0,};
    while(n--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int i=x1;i<x2;i++)
            for(int j=y1;j<y2;j++)
                arr[i][j]=true;
    }
    int sum=0;
    for(int i=0;i<201;i++)
    {
        for(int j=0;j<201;j++)
        {
            if(arr[i][j] == true)
            {
                sum++;
            }
        }
    }
    cout<<sum;    
    return 0;
}