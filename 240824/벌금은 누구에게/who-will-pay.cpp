#include <iostream>
using namespace std;
int main() {
    int n,m,k;
    int arr[n+1] = {0,};
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        arr[a]++;
        if(arr[a] >= k)
        {
            cout<<a;
            return 0;
        } 
    }
    cout<<-1;
    return 0;
}