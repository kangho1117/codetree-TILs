#include <iostream>
using namespace std;
int maxval(int n, int max)
{
    if(n==0) return max;
    int temp;
    cin>>temp;
    if(max < temp) max = temp;
    max = maxval(n-1,max);
    return max;
}
int main() {
    int n;
    cin>>n;
    cout<<maxval(n, 0);
    return 0;
}