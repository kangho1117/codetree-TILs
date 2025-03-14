#include <iostream>
using namespace std;
int n,sum=0,A[100],B[100];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];
    for (int i = 0; i < n; i++)
    {
        while(A[i]!=B[i])
        {
            A[i]--;
            A[i+1]++;
            sum++;
        }
    }
    cout<<sum;
    return 0;
}