#include <iostream>
using namespace std;
int maxga(bool arr[2001][2001])
{
    int maxga=0;
    for(int i=2000,g1=0,g2=0;i>=0;i--)
    {
        for(int j=2000;j>=0;j--)
        {
            if(arr[i][j] == true)
            {
                g1 = j;
                break;
            } 
        }
        for(int j=0;j<2001;j++)
        {
            if(arr[i][j] == true) 
            {
                g2 = j;
                break;
            } 
        }
        if((g1-g2+1)>maxga) maxga = (g1-g2+1);
    } 
    return maxga;
}
int maxse(bool arr[2001][2001])
{
    int maxse=0;
    for(int i=2000,s1=0,s2=0;i>=0;i--)
    {
        for(int j=2000;j>=0;j--)
        {
            if(arr[j][i] == true)
            {
                s1 = j;
                break;
            } 
        }
        for(int j=0;j<2001;j++)
        {
            if(arr[j][i] == true) 
            {
                s2 = j;
                break;
            } 
        }
        if((s1-s2+1)>maxse) maxse = (s1-s2+1);
    } 
    return maxse;
}

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
    semax = maxse(arr);
    gamax = maxga(arr);

    //cout<<gamax<<"  "<<semax<<"\n";
    cout<<(gamax*semax);
    return 0;
}