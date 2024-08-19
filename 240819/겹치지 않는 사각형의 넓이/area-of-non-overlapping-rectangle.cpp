#include <iostream>
using namespace std;
int main() {
    int arr[2001][2001] = {0,};
    int x1,y1,x2,y2;
    for(int n=0;n<2;n++)
    {
        cin>>x1>>y1>>x2>>y2;
        for(int j=y1+1;j<=y2;j++)
            for(int i=x1+1;i<=x2;i++)
                arr[i][j]++;
    }
    cin>>x1>>y1>>x2>>y2;
    for(int j=y1+1;j<=y2;j++)
        for(int i=x1+1;i<=x2;i++)
            arr[i][j]=0;
    
    int sum = 0;
    for(int i=0;i<2001;i++)
        for(int j=0;j<2001;j++)
            if(arr[i][j]==1) sum++;
    cout<<sum;
    return 0;
}