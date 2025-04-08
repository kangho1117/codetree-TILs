#include <iostream>
using namespace std;
int n,sum=0,target;
int blocks[10000];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
        sum+=blocks[i];
    }
    target = sum/n;
    sum=0;
    for(int i=0;i<n;i++)
    {
        if(blocks[i]<target)
        {
            sum += target-blocks[i];
        }
    }
    cout<<sum;
    return 0;
}