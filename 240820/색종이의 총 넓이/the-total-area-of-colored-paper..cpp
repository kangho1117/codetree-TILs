#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool arr[201][201] = {0,};
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        a+=100;
        b+=100;
        for(int i=b;i<b+8;i++)
            for(int j=a;j<a+8;j++)
                arr[i][j]=true;
    }
    int sum=0;
    for(int i=0;i<200;i++)
        for(int j=0;j<200;j++)
            if(arr[i][j]==true) sum++;
    cout<<sum;
    return 0;
}