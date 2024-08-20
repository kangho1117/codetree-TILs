#include <iostream>
using namespace std;

int main() {
    int a1,b1,c1,d1,a2,b2,c2,d2;
    cin>>a1>>b1>>c1>>d1>>a2>>b2>>c2>>d2;
    bool arr[2001][2001] = {0,};
    a1+=1000,b1+=1000,c1+=1000,d1+=1000,a2+=1000,b2+=1000,c2+=1000,d2+=1000;
    for(int i=d1;i>b1;i--)
        for(int j=c1;j>a1;j--)
            arr[i][j]=1;
    for(int i=d2;i>b2;i--)
        for(int j=c2;j>a2;j--)
            arr[i][j]=0;
    int semax=0,gamax=0;
    for(int i=2000, se=0;i>=0;i--)
    {
        for(int j=2000,ga=0;j>=0;j--)
        {
            if(arr[i][j] == 1) ga++;
            if(ga > gamax) gamax = ga;
        }
    }  
    for(int i=2000;i>=0;i--)
    {
        for(int j=2000,se=0;j>=0;j--)
        {
            if(arr[j][i] == 1) se++;
            if(se > semax) semax = se;
        }
    }   
    cout<<gamax*semax;
    return 0;
}