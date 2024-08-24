#include <iostream>
using namespace std;
int main() {
    int n,m,k;
    int arr[n+1] = {0,};
    bool bul =false;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        arr[a]++;
        if(arr[a] >= k)
        {
            bul =  true;
            cout<<a;
            break;
        } 
    }
    if(!bul) cout<<-1;
    return 0;
}